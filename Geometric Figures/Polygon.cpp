#include "Polygon.h"
#include <cmath>
#include <iostream>
#include <sstream>

Polygon::Polygon(Point* points, int n) : numVertices(n)
{
    vertices = new Point[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        vertices[i] = points[i];
    }
}

Polygon::Polygon(std::ifstream& file) : numVertices(0)
{
    std::string line;
    if (std::getline(file, line))
    {
        std::istringstream iss(line);
        iss >> numVertices;
        vertices = new Point[numVertices];

        for (int i = 0; i < numVertices; i++)
        {
            if (!std::getline(file, line))
            {
                break;
            }

            std::istringstream pointStream(line);
            Point point;
            pointStream >> point.x >> point.y;
            vertices[i] = point;
        }
    }
}

double Polygon::Area() const
{
    double area = 0;

    for (int i = 0; i < numVertices; i++)
    {
        int j = (i + 1) % numVertices;
        area += vertices[i].x * vertices[j].y - vertices[j].x * vertices[i].y;
    }

    return std::abs(area) / 2;
}

double Polygon::Perimeter() const
{
    double perimeter = 0;

    for (int i = 0; i < numVertices; i++)
    {
        int j = (i + 1) % numVertices;
        perimeter += std::sqrt(std::pow(vertices[i].x - vertices[j].x, 2) + std::pow(vertices[i].y - vertices[j].y, 2));
    }

    return perimeter;
}

void Polygon::Name() const
{
    std::cout << "Polygon" << std::endl;
}