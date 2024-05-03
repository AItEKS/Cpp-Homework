#pragma once
#include "Figure.h"
#include <fstream>

class Polygon : public Figure
{
private:
    Point* vertices;
    int numVertices;

public:
    Polygon(Point* points, int n);
    Polygon(std::ifstream& file);
    virtual double Area() const override;
    virtual double Perimeter() const override;
    virtual void Name() const override;
};