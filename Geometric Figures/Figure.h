#pragma once

struct Point
{
    double x;
    double y;
};

class Figure
{
public:
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
    virtual void Name() const = 0;

    virtual ~Figure() {};
};