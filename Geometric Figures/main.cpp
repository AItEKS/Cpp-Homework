#include <iostream>
#include <fstream>

#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Polygon.h"

int main()
{
    Point<double> polygonVertices[] = { {0, 0}, {2, 0}, {2, 2}, {0, 2} };
    std::ifstream in("Points.txt");

    Triangle<double> triangle(Point<double>{ 1, 2 }, Point<double>{ 1, 5 }, Point<double>{ 3, 2 });
    Rectangle<double> rectangle(Point<double>{ 1, 2 }, Point<double>{ 1, 5 }, Point<double>{ 3, 2 }, Point<double>{ 3, 5 });
    Circle<double> circle(Point<double>{ 0, 0 }, 10);
    Ellipse<double> ellipse(Point<double>{ 0, 0 }, 5, 10);
    Polygon<double> polygon(polygonVertices, 4);
    Polygon<double> ppolygon(in);

    Figure<double>* figures[] = { &triangle, &rectangle, &circle, &ellipse, &polygon, &ppolygon };
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
