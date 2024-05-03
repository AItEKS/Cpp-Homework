#include "Ellipse.h"
#include <cmath>
#include <iostream>

#define M_PI 3.14159265358979323846

Ellipse::Ellipse(Point c, double a, double b) : center(c), majorRadius(a), minorRadius(b) {}

double Ellipse::Area() const
{
    return M_PI * majorRadius * minorRadius;
}

double Ellipse::Perimeter() const
{
    return 2 * M_PI * sqrt((majorRadius * majorRadius + minorRadius * minorRadius) / 2);
}

void Ellipse::Name() const
{
    std::cout << "Ellipse" << std::endl;
}