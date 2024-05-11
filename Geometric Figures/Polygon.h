#pragma once
#include "Figure.h"


template <typename T>
class Polygon : public Figure<T>
{
private:
    Point<T>* vertices;
    int numVertices;

public:
    Polygon(Point<T>* points, int n);
    Polygon(std::ifstream& file);
    virtual T Area() const override;
    virtual T Perimeter() const override;
    virtual void Name() const override;
};

template <typename T>
Polygon<T>::Polygon(Point<T>* points, int n) : numVertices(n)
{
    vertices = new Point<T>[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        vertices[i] = points[i];
    }
}

template <typename T>
Polygon<T>::Polygon(std::ifstream& file) : numVertices(0)
{
    std::string line;
    if (std::getline(file, line))
    {
        std::istringstream iss(line);
        iss >> numVertices;
        vertices = new Point<T>[numVertices];

        for (int i = 0; i < numVertices; i++)
        {
            if (!std::getline(file, line))
            {
                break;
            }

            std::istringstream pointStream(line);
            Point<T> point;
            pointStream >> point.x >> point.y;
            vertices[i] = point;
        }
    }
}

template <typename T>
T Polygon<T>::Area() const
{
    T area = 0;

    for (int i = 0; i < numVertices; i++)
    {
        int j = (i + 1) % numVertices;
        area += vertices[i].x * vertices[j].y - vertices[j].x * vertices[i].y;
    }

    return std::abs(area) / 2;
}

template <typename T>
T Polygon<T>::Perimeter() const
{
    T perimeter = 0;

    for (int i = 0; i < numVertices; i++)
    {
        int j = (i + 1) % numVertices;
        perimeter += std::sqrt(std::pow(vertices[i].x - vertices[j].x, 2) + std::pow(vertices[i].y - vertices[j].y, 2));
    }

    return perimeter;
}

template <typename T>
void Polygon<T>::Name() const
{
    std::cout << "Polygon" << std::endl;
}