#include <iostream>
#include "RightTriangle.h"
#include "RightDegreeTriangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Line.h"
#include"Trapezoid.h"

using namespace std;

int SelectFunc(Triangle& shape)
{
    while (true)
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру" << endl;
        int number;
        cin >> number;
        switch (number)
        {
            case 1:
            {
                shape.Rotate();
                break;
            }
            case 2:
            {
                shape.Translate();
                break;
            }
            case 3:
            {
                shape.Scale();
                break;
            }
            case 4:
            {
                shape.Rendering();
                break;
            }
            case 5:
            {
                return 0;
            }
        }
    }
}

int SelectFunc(Quadrilateral& shape)
{
    while (true)
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру" << endl;
        int number;
        cin >> number;
        switch (number)
        {
            case 1:
            {
                shape.Rotate();
                break;
            }
            case 2:
            {
                shape.Translate();
                break;
            }
            case 3:
            {
                shape.Scale();
                break;
            }
            case 4:
            {
                shape.Rendering();
                break;
            }
            case 5:
            {
                return 0;
            }
        }
    }
}

int SelectFunc(Line& shape)
{
    while (true)
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру" << endl;
        int number;
        cin >> number;
        switch (number)
        {
            case 1:
            {
                shape.Rotate();
                break;
            }
            case 2:
            {
                shape.Translate();
                break;
            }
            case 3:
            {
                shape.Scale();
                break;
            }
            case 4:
            {
                shape.Rendering();
                break;
            }
            case 5:
            {
                return 0;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "1. Треугольник\n2. Четырехугольник\n3. Линия" << endl;
    int number;
    cin >> number;
    switch (number)
    {
        case 1:
        {
            Triangle& tri = Triangle::SelectShape();
            SelectFunc(tri);
            break;
        }
        case 2:
        {
            Quadrilateral& quad = Quadrilateral::SelectShape();
            SelectFunc(quad);
            break;
        }
        case 3:
        {
            Line& line = Line::SelectShape();
            SelectFunc(line);
            break;
        }
        default:
        {
            cout << "Error" << endl;
        }
    }
    return 1;
}