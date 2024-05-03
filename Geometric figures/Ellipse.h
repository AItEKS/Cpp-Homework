#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

#define M_PI 3.14159265358979323846

class Ellipse : public Figure
{
private:
    Point center;
    double majorRadius;
    double minorRadius;

public:
    Ellipse(Point c, double a, double b) : center(c), majorRadius(a), minorRadius(b) {}

    virtual double Area() const override
    {
        return M_PI * majorRadius * minorRadius;
    }

    virtual double Perimeter() const override
    {
        return 2 * M_PI * sqrt((majorRadius * majorRadius + minorRadius * minorRadius) / 2);
    }

    virtual void Name() const override
    {
        std::cout << "Ellipse" << std::endl;
    }
};