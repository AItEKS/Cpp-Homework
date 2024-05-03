#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
    Point center;
    double radius;

public:
    Circle(Point c, double r);
    virtual double Area() const override;
    virtual double Perimeter() const override;
    virtual void Name() const override;
};