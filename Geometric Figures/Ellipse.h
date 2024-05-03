#pragma once
#include "Figure.h"

class Ellipse : public Figure
{
private:
    Point center;
    double majorRadius;
    double minorRadius;

public:
    Ellipse(Point c, double a, double b);
    virtual double Area() const override;
    virtual double Perimeter() const override;
    virtual void Name() const override;
};