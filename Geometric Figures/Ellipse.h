#pragma once
#include "Figure.h"


template <typename T>
class Ellipse : public Figure<T>
{
private:
    Point<T> center;
    T majorRadius;
    T minorRadius;

public:
    Ellipse(Point<T> c, T a, T b);
    virtual T Area() const override;
    virtual T Perimeter() const override;
    virtual void Name() const override;
};

template <typename T>
Ellipse<T>::Ellipse(Point<T> c, T a, T b) : center(c), majorRadius(a), minorRadius(b) {}

template <typename T>
T Ellipse<T>::Area() const
{
    return M_PI * majorRadius * minorRadius;
}

template <typename T>
T Ellipse<T>::Perimeter() const
{
    return 2 * M_PI * sqrt((majorRadius * majorRadius + minorRadius * minorRadius) / 2);
}

template <typename T>
void Ellipse<T>::Name() const
{
    std::cout << "Ellipse" << std::endl;
}