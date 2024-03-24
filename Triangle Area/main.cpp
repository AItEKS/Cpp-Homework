#include "geometry.h"
#include "search.h"
#include "file.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const char* inFileName = "inf.txt";
    const char* outFileName = "outf.txt";
    int pointNum = countPoints(inFileName);
    Point* pointArray = new Point[pointNum];
    readPoints(inFileName, pointArray, pointNum);
    const int maxTrNum = 3;
    Triangle trArray[maxTrNum];
    searchLargestTriangles(pointArray, pointNum, trArray, maxTrNum);
    writeTriangles(outFileName, trArray, maxTrNum);
    cout << "Программа успешно завершена" << endl;

    delete[] pointArray;
    return 0;
}
