#include <iostream>
#include <vector>
#include <fstream>

#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Polygon.h"


void reader(std::vector<std::vector<int>>& fig)
{
    std::ifstream figure("Figures/input2.dat");

    std::string line;
    while (std::getline(figure, line)) {
        std::vector<int> row;
        for (char c : line) {
            if (c == '0' || c == '1') {
                row.push_back(c - '0');
            }
        }
        fig.push_back(row);
    }

    figure.close();
}

int iCircle = 0, jCircle = 0, widthC = 0, heightC = 0;
std::vector<std::vector<int>> circleInfo;

bool findCircle(std::vector<std::vector<int>>& fig, int i, int j)
{
    int ni = i; int nj = j;

    while (fig[ni][nj] == 1)
    {
        ni++;
        heightC++;
    }

    int middleHeight = i + (heightC - 1) / 2;

    if (heightC % 2 == 0 || heightC < 3 || fig[middleHeight][j - 1] == 0 || fig[middleHeight][j + 1] == 0)
    {
        return false;
    }    

    while (fig[middleHeight][nj] == 1)
    {
        nj++;
        widthC++;
    }

    iCircle = i;
    jCircle = j;

    // if (heightC == 23) std::cout << heightC << " " << widthC;

    return true;
}

bool findRectangle(std::vector<std::vector<int>>& fig, int i, int j)
{
    int ni = i, nj = j;
    int height = 0, width = 0, width1 = 0;

    while (fig[ni][nj] == 1)
    {
        nj++;
        width++;
    }
    nj--;

    if (width == 1)
    {
        return false;
    }

    while (fig[ni][nj] == 1)
    {
        ni++;
        height++;
    }
    ni--;

    if (height < 4)
    {
        return false;
    }

    while (fig[ni][nj] == 1)
    {
        nj--;
        width1++;
    }

    if (width1 != width)
    {
        return false;
    }

    for (auto& k : circleInfo)
    {
        if (k[0] <= (i + height / 2) && (i + height / 2) <= k[1] && k[2] <= (j + width / 2) && (j + width / 2)  <= k[3])
        {
            //std::cout << i << " " << j << " W: " << width << " H: " << height << std::endl;
            return false;
        }
    }

    return true;
}

int main()
{   
    std::vector<std::vector<int>> fig;
    reader(fig);

    int countCircles = 0;
    int countRectangles = 0;
    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < 200; j++)
        {
            if (fig[i][j] == 1 && fig[i - 1][j] == 0 && fig[i][j - 1] == 0 && fig[i][j + 1] == 0 && i >= 1 && i <= 199 && j >= 1 && j <= 199)
            {
                if (findCircle(fig, i, j))
                {
                    countCircles++;
                    circleInfo.push_back({ iCircle, iCircle + 2 * widthC - 2, jCircle - widthC, jCircle + widthC });
                }
                iCircle = 0, jCircle = 0, widthC = 0, heightC = 0;
            }

            if (fig[i][j] == 1 && fig[i][j + 1] == 1 && fig[i + 1][j] == 1 && fig[i + 1][j + 1] == 1 && fig[i - 1][j] == 0 && fig[i - 1][j - 1] == 0 && fig[i][j - 1] == 0 && i <= 199 && j <= 199 && i >= 1 && j >= 1)
            {
                if (findRectangle(fig, i, j))
                {
                    std::cout << i << " " << j << " " << fig[i][j] << std::endl;
                    countRectangles++;
                }
            }
        }
    }

    std::cout << "Rectangle: " << countRectangles << std::endl;
    std::cout << "Circle: " << countCircles << std::endl;

    //for (auto& i : circleInfo)
    //{
    //    std::cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << std::endl;
    //}

    return 0;
}
