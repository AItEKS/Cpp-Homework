#include "Sudoku.h"

// Конструктор класса Sudoku
Sudoku::Sudoku(int K)
{
    this->K = K;
    double SRNd = sqrt(N);
    SRN = (int)SRNd;
    mat = new int* [N];

    // Инициализация матрицы судоку
    for (int i = 0; i < N; i++) {
        mat[i] = new int[N];
        memset(mat[i], 0, N * sizeof(int));
    }
}

// Конструктор класса Sudoku
Sudoku::Sudoku(int* val)
{
    this->N = 9;
    this->K = 0;
    double SRNd = sqrt(N);
    this->SRN = (int)SRNd;
    this->mat = new int* [N];

    // Инициализация матрицы судоку
    for (int i = 0; i < N; i++) {
        this->mat[i] = new int[N];
    }

    // Заполнение матрицы судоку значениями из одномерного массива
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            try {
                this->mat[i][j] = val[i * N + j];
                if (this->mat[i][j] < 0 || this->mat[i][j] > 9) {
                    throw std::invalid_argument("Значение должно быть от 0 до 9");
                }
            }
            catch (const std::invalid_argument& e) {
                std::cerr << "Ошибка: " << e.what() << std::endl;
                this->mat[i][j] = 0;
            }
        }
    }
}

// Метод для заполнения значений в судоку
void Sudoku::fillValues()
{
    fillDiagonal();
    fillRemaining(0, SRN);
    removeKDigits();
}

// Метод для заполнения диагональных блоков судоку
void Sudoku::fillDiagonal()
{
    for (int i = 0; i < N; i = i + SRN) {
        fillBox(i, i);
    }
}

// Проверка, не используется ли число num в определенном блоке
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

// Заполнение 3x3 блока судоку
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

// Генератор случайных чисел
int Sudoku::randomGenerator(int num)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1, num);
    return distrib(gen);
}

// Проверка, безопасно ли поместить число в ячейку
bool Sudoku::CheckIfSafe(int i, int j, int num)
{
    return (unUsedInRow(i, num) && unUsedInCol(j, num) && unUsedInBox(i - i % SRN, j - j % SRN, num));
}

// Проверка, не используется ли число num в строке
bool Sudoku::unUsedInRow(int i, int num)
{
    for (int j = 0; j < N; j++) {
        if (mat[i][j] == num) {
            return false;
        }
    }
    return true;
}

// Проверка, не используется ли число num в столбце
bool Sudoku::unUsedInCol(int j, int num)
{
    for (int i = 0; i < N; i++) {
        if (mat[i][j] == num) {
            return false;
        }
    }
    return true;
}

// Рекурсивная функция для заполнения оставшейся части судоку
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

// Удаление K чисел из судоку
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

// Вывод судоку
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


// Метод для решения судоку
bool Sudoku::solveSudoku()
{
    return solveUtil(0, 0);
}

// Вспомогательная рекурсивная функция для решения судоку
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

// Метод для получения массива значений
int** Sudoku::getValues()
{
    return mat;
}