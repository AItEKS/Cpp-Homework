#pragma once

#include <cmath>
#include <cstring>
#include <string>
#include <iostream>
#include <random>

class Sudoku 
{
public:
    Sudoku(int K);
    Sudoku(int* val);
    void fillValues();
    void printSudoku();
    bool solveSudoku(); 
    int** getValues();

private:
    int** mat;
    int N = 9;
    int SRN;
    int K;

    void fillDiagonal();
    void fillBox(int row, int col);
    bool unUsedInBox(int rowStart, int colStart, int num);
    int randomGenerator(int num);
    bool CheckIfSafe(int i, int j, int num);
    bool unUsedInRow(int i, int num);
    bool unUsedInCol(int j, int num);
    bool fillRemaining(int i, int j);
    void removeKDigits();
    bool solveUtil(int i, int j);
};