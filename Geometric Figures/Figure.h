#pragma once
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>


#define M_PI 3.14159265358979323846

template <typename T>
struct Point
{
    T x;
    T y;
};

template <typename T>
class Figure
{
public:
    virtual T Area() const = 0;
    virtual T Perimeter() const = 0;
    virtual void Name() const = 0;

    virtual ~Figure() {};
};