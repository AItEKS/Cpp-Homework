#include <iostream>
#include <fstream>

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Polygon.h"

int main()
{
    Point polygonVertices[] = { {0, 0}, {2, 0}, {2, 2}, {0, 2} };
    std::ifstream in("Points.txt");

    Triangle triangle(Point{ 1, 2 }, Point{ 1, 5 }, Point{ 3, 2 });
    Rectangle rectangle(Point{ 1, 2 }, Point{ 1, 5 }, Point{ 3, 2 }, Point{ 3, 5 });
    Circle circle(Point{ 0, 0 }, 10);
    Ellipse ellipse(Point{ 0, 0 }, 5, 10);
    Polygon polygon(polygonVertices, 4);
    Polygon ppolygon(in);

    Figure* figures[] = { &triangle, &rectangle, &circle, &ellipse, &polygon, &ppolygon };
    int numFigures = sizeof(figures) / sizeof(figures[0]);

    for (int i = 0; i < numFigures; i++)
    {
        std::cout << "Area of the figure: " << figures[i]->Area() << std::endl;
        std::cout << "Perimeter of the figure: " << figures[i]->Perimeter() << std::endl;
        figures[i]->Name();
        std::cout << std::endl;
    }

    return 0;
}
