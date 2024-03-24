#ifndef _GEOMETRY_H
#define _GEOMETRY_H

struct Point
{
    double x, y; 
};

struct Triangle
{
    Point vertexes[3]; 
    double area; 
};

double calcDistance(const Point& pa, const Point& pb);
double calcTriangleArea(Triangle& tr);
double calcAreaBySides(double a, double b, double c);

#endif