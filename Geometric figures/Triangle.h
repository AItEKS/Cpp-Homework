#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Triangle : public Figure
{
private:
    Point vertices[3];

public:
    Triangle(Point A, Point B, Point C)
    {
        vertices[0] = A;
        vertices[1] = B;
        vertices[2] = C;
    }

    virtual double Area() const override
    {
        return 0.5 * abs((vertices[0].x * (vertices[1].y - vertices[2].y) + vertices[1].x * (vertices[2].y - vertices[0].y) + vertices[2].x * (vertices[0].y - vertices[1].y)));
    }

    virtual double Perimeter() const override
    {
        return sqrt(pow(vertices[0].x - vertices[1].x, 2) + pow(vertices[0].y - vertices[1].y, 2)) + sqrt(pow(vertices[1].x - vertices[2].x, 2) + pow(vertices[1].y - vertices[2].y, 2)) + sqrt(pow(vertices[2].x - vertices[0].x, 2) + pow(vertices[2].y - vertices[0].y, 2));
    }

    virtual void Name() const override
    {
        std::cout << "Triangle" << std::endl;
    }
};