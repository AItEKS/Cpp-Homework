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

    std::cout << "Area of the triangle: " << triangle.Area() << std::endl;
    std::cout << "Perimetr of the triangle: " << triangle.Perimeter() << std::endl;
    triangle.Name();
    std::cout << std::endl;

    std::cout << "Area of the rectangle: " << rectangle.Area() << std::endl;
    std::cout << "Perimetr of the rectangle: " << rectangle.Perimeter() << std::endl;
    rectangle.Name();
    std::cout << std::endl;

    std::cout << "Area of the circle: " << circle.Area() << std::endl;
    std::cout << "Perimetr of the circle: " << circle.Perimeter() << std::endl;
    circle.Name();
    std::cout << std::endl;

    std::cout << "Area of the ellipse: " << ellipse.Area() << std::endl;
    std::cout << "Perimetr of the ellipse: " << ellipse.Perimeter() << std::endl;
    ellipse.Name();

    std::cout << "Area of the polygon: " << polygon.Area() << std::endl;
    std::cout << "Perimetr of the polygon: " << polygon.Perimeter() << std::endl;
    polygon.Name();
    std::cout << std::endl;

    std::cout << "Area of the ppolygon: " << ppolygon.Area() << std::endl;
    std::cout << "Perimetr of the ppolygon: " << ppolygon.Perimeter() << std::endl;
    ppolygon.Name();
    std::cout << std::endl;
}
