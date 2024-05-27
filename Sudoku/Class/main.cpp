#include <iostream>
#include "Sudoku.h"

int main()
{
    int K = 50;
    Sudoku sudoku = Sudoku(K);
    sudoku.fillValues();
    sudoku.printSudoku();
    sudoku.solveSudoku();
    sudoku.printSudoku();
    return 0;
}
