#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
    Point vertices[4];

public:
    Rectangle(Point A, Point B, Point C, Point D);
    virtual double Area() const override;
    virtual double Perimeter() const override;
    virtual void Name() const override;
};