#include "Circle.h"
#include <cmath>
#include <iostream>

#define M_PI 3.14159265358979323846

Circle::Circle(Point c, double r) : center(c), radius(r) {}

double Circle::Area() const
{
    return M_PI * radius * radius;
}

double Circle::Perimeter() const
{
    return 2 * M_PI * radius;
}

void Circle::Name() const
{
    std::cout << "Circle" << std::endl;
}