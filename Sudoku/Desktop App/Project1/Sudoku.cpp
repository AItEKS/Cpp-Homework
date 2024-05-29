#include "Sudoku.h"

// ����������� ������ Sudoku
Sudoku::Sudoku(int K)
{
    this->K = K;
    double SRNd = sqrt(N);
    SRN = (int)SRNd;
    mat = new int* [N];

    // ������������� ������� ������
    for (int i = 0; i < N; i++) {
        mat[i] = new int[N];
        memset(mat[i], 0, N * sizeof(int));
    }
}

// ����������� ������ Sudoku
Sudoku::Sudoku(int* val)
{
    this->N = 9;
    this->K = 0;
    double SRNd = sqrt(N);
    this->SRN = (int)SRNd;
    this->mat = new int* [N];

    // ������������� ������� ������
    for (int i = 0; i < N; i++) {
        this->mat[i] = new int[N];
    }

    // ���������� ������� ������ ���������� �� ����������� �������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            try {
                this->mat[i][j] = val[i * N + j];
                if (this->mat[i][j] < 0 || this->mat[i][j] > 9) {
                    throw std::invalid_argument("�������� ������ ���� �� 0 �� 9");
                }
            }
            catch (const std::invalid_argument& e) {
                std::cerr << "������: " << e.what() << std::endl;
                this->mat[i][j] = 0;
            }
        }
    }
}

// ����� ��� ���������� �������� � ������
void Sudoku::fillValues()
{
    fillDiagonal();
    fillRemaining(0, SRN);
    removeKDigits();
}

// ����� ��� ���������� ������������ ������ ������
void Sudoku::fillDiagonal()
{
    for (int i = 0; i < N; i = i + SRN) {
        fillBox(i, i);
    }
}

// ��������, �� ������������ �� ����� num � ������������ �����
bool Sudoku::unUsedInBox(int rowStart, int colStart, int num)
{
    for (int i = 0; i < SRN; i++) {
        for (int j = 0; j < SRN; j++) {
            if (mat[rowStart + i][colStart + j] == num) {
                return false;
            }
        }
    }
    return true;
}

// ���������� 3x3 ����� ������
void Sudoku::fillBox(int row, int col)
{
    int num;
    for (int i = 0; i < SRN; i++) {
        for (int j = 0; j < SRN; j++) {
            do {
                num = randomGenerator(N);
            } while (!unUsedInBox(row, col, num));
            mat[row + i][col + j] = num;
        }
    }
}

// ��������� ��������� �����
int Sudoku::randomGenerator(int num)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, num);
    return distrib(gen);
}

// ��������, ��������� �� ��������� ����� � ������
bool Sudoku::CheckIfSafe(int i, int j, int num)
{
    return (unUsedInRow(i, num) && unUsedInCol(j, num) && unUsedInBox(i - i % SRN, j - j % SRN, num));
}

// ��������, �� ������������ �� ����� num � ������
bool Sudoku::unUsedInRow(int i, int num)
{
    for (int j = 0; j < N; j++) {
        if (mat[i][j] == num) {
            return false;
        }
    }
    return true;
}

// ��������, �� ������������ �� ����� num � �������
bool Sudoku::unUsedInCol(int j, int num)
{
    for (int i = 0; i < N; i++) {
        if (mat[i][j] == num) {
            return false;
        }
    }
    return true;
}

// ����������� ������� ��� ���������� ���������� ����� ������
bool Sudoku::fillRemaining(int i, int j)
{
    if (j >= N && i < N - 1) {
        i = i + 1;
        j = 0;
    }
    if (i >= N && j >= N) {
        return true;
    }
    if (i < SRN) {
        if (j < SRN) {
            j = SRN;
        }
    }
    else if (i < N - SRN) {
        if (j == (int)(i / SRN) * SRN) {
            j = j + SRN;
        }
    }
    else {
        if (j == N - SRN) {
            i = i + 1;
            j = 0;
            if (i >= N) {
                return true;
            }
        }
    }
    for (int num = 1; num <= N; num++) {
        if (CheckIfSafe(i, j, num)) {
            mat[i][j] = num;
            if (fillRemaining(i, j + 1)) {
                return true;
            }
            mat[i][j] = 0;
        }
    }
    return false;
}

// �������� K ����� �� ������
void Sudoku::removeKDigits()
{
    int count = K;
    while (count != 0) {
        int cellId = randomGenerator(N * N) - 1;
        int i = (cellId / N);
        int j = cellId % N;
        if (mat[i][j] != 0) {
            count--;
            mat[i][j] = 0;
        }
    }
}

// ����� ������
void Sudoku::printSudoku()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << std::to_string(mat[i][j]) + " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


// ����� ��� ������� ������
bool Sudoku::solveSudoku()
{
    return solveUtil(0, 0);
}

// ��������������� ����������� ������� ��� ������� ������
bool Sudoku::solveUtil(int i, int j)
{
    if (i == N) {
        return true;
    }
    if (j == N) {
        return solveUtil(i + 1, 0);
    }
    if (mat[i][j] != 0) {
        return solveUtil(i, j + 1);
    }
    for (int num = 1; num <= N; num++) {
        if (CheckIfSafe(i, j, num)) {
            mat[i][j] = num;
            if (solveUtil(i, j + 1)) {
                return true;
            }
            mat[i][j] = 0;
        }
    }
    return false;
}

// ����� ��� ��������� ������� ��������
int** Sudoku::getValues()
{
    return mat;
}