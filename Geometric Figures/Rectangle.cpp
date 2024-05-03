#include "Rectangle.h"
#include <cmath>
#include <iostream>

Rectangle::Rectangle(Point A, Point B, Point C, Point D)
{
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
    vertices[3] = D;
}

double Rectangle::Area() const
{
    return std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) * std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2));
}

double Rectangle::Perimeter() const
{
    return 2 * (std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) + std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2)));
}

void Rectangle::Name() const
{
    std::cout << "Rectangle" << std::endl;
}