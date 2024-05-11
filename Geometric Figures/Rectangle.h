#pragma once
#include "Figure.h"


template <typename T>
class Rectangle : public Figure<T>
{
private:
    Point<T> vertices[4];

public:
    Rectangle(Point<T> A, Point<T> B, Point<T> C, Point<T> D);
    virtual T Area() const override;
    virtual T Perimeter() const override;
    virtual void Name() const override;
};

template <typename T>
Rectangle<T>::Rectangle(Point<T> A, Point<T> B, Point<T> C, Point<T> D)
{
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
    vertices[3] = D;
}

template <typename T>
T Rectangle<T>::Area() const
{
    return std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) * std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2));
}

template <typename T>
T Rectangle<T>::Perimeter() const
{
    return 2 * (std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) + std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2)));
}

template <typename T>
void Rectangle<T>::Name() const
{
    std::cout << "Rectangle" << std::endl;
}