#include "Triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle(Point A, Point B, Point C)
{
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
}

double Triangle::Area() const
{
    return 0.5 * std::abs((vertices[0].x * (vertices[1].y - vertices[2].y) + vertices[1].x * (vertices[2].y - vertices[0].y) + vertices[2].x * (vertices[0].y - vertices[1].y)));
}

double Triangle::Perimeter() const
{
    return std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) + std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2)) + std::sqrt(std::pow(vertices[2].x - vertices[0].x, 2) + std::pow(vertices[2].y - vertices[0].y, 2));
}

void Triangle::Name() const
{
    std::cout << "Triangle" << std::endl;
}