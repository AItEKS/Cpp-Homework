#pragma once
#include "Figure.h"


template <typename T>
class Circle : public Figure<T>
{
private:
    Point<T> center;
    T radius;

public:
    Circle(Point<T> c, T r);
    virtual T Area() const override;
    virtual T Perimeter() const override;
    virtual void Name() const override;
};

template <typename T>
Circle<T>::Circle(Point<T> c, T r) : center(c), radius(r) {}

template <typename T>
T Circle<T>::Area() const
{
    return M_PI * radius * radius;
}

template <typename T>
T Circle<T>::Perimeter() const
{
    return 2 * M_PI * radius;
}

template <typename T>
void Circle<T>::Name() const
{
    std::cout << "Circle" << std::endl;
}