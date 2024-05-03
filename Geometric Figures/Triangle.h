#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
    Point vertices[3];

public:
    Triangle(Point A, Point B, Point C);
    virtual double Area() const override;
    virtual double Perimeter() const override;
    virtual void Name() const override;
};