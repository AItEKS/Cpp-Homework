#pragma once
#include <iostream>
#include <cmath>
#include "Figure.h"

class Rectangle : public Figure
{
private:
    Point vertices[4];

public:
    Rectangle(Point A, Point B, Point C, Point D)
    {
        vertices[0] = A;
        vertices[1] = B;
        vertices[2] = C;
        vertices[3] = D;
    }

    virtual double Area() const override
    {
        return sqrt(pow(vertices[0].x - vertices[1].x, 2) + pow(vertices[0].y - vertices[1].y, 2)) * sqrt(pow(vertices[1].x - vertices[2].x, 2) + pow(vertices[1].y - vertices[2].y, 2));
    }

    virtual double Perimeter() const override
    {
        return 2 * (sqrt(pow(vertices[0].x - vertices[1].x, 2) + pow(vertices[0].y - vertices[1].y, 2)) + sqrt(pow(vertices[1].x - vertices[2].x, 2) + pow(vertices[1].y - vertices[2].y, 2)));
    }

    virtual void Name() const override
    {
        std::cout << "Rectangle" << std::endl;
    }
};