#pragma once
#include "Figure.h"


template <typename T>
class Triangle : public Figure<T>
{
private:
    Point<T> vertices[3];

public:
    Triangle(Point<T> A, Point<T> B, Point<T> C);
    virtual T Area() const override;
    virtual T Perimeter() const override;
    virtual void Name() const override;
};

template <typename T>
Triangle<T>::Triangle(Point<T> A, Point<T> B, Point<T> C)
{
    vertices[0] = A;
    vertices[1] = B;
    vertices[2] = C;
}

template <typename T>
T Triangle<T>::Area() const
{
    return 0.5 * std::abs((vertices[0].x * (vertices[1].y - vertices[2].y) + vertices[1].x * (vertices[2].y - vertices[0].y) + vertices[2].x * (vertices[0].y - vertices[1].y)));
}

template <typename T>
T Triangle<T>::Perimeter() const
{
    return std::sqrt(std::pow(vertices[0].x - vertices[1].x, 2) + std::pow(vertices[0].y - vertices[1].y, 2)) + std::sqrt(std::pow(vertices[1].x - vertices[2].x, 2) + std::pow(vertices[1].y - vertices[2].y, 2)) + std::sqrt(std::pow(vertices[2].x - vertices[0].x, 2) + std::pow(vertices[2].y - vertices[0].y, 2));
}

template <typename T>
void Triangle<T>::Name() const
{
    std::cout << "Triangle" << std::endl;
}