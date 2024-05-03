#pragma once
#include <iostream>
#include "Figure.h"

#define M_PI 3.14159265358979323846

class Circle : public Figure
{
private:
    Point center;
    double radius;

public:
    Circle(Point c, double r) : center(c), radius(r) {}

    virtual double Area() const override
    {
        return M_PI * radius * radius;
    }

    virtual double Perimeter() const override
    {
        return 2 * M_PI * radius;
    }

    virtual void Name() const override
    {
        std::cout << "Circle" << std::endl;
    }
};