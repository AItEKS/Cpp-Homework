#ifndef _SEARCH_H
#define _SEARCH_H

void searchLargestTriangles(const Point* pointArray, int pointNum, Triangle* trarray, int maxTrNum);
void findAndInsert(Triangle* trArray, int lenght, const Triangle& triangle);
void clearPoint(Point& p);
void clearTriangle(Triangle& tr);

#endif