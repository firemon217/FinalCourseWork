#include <iostream>
#include "RightTriangle.h"
#include "RightDegreeTriangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Line.h"
#include"Trapezoid.h"

using namespace std;

int SelectFunc(Triangle& shape) //Выбор действия над фигурой, перегрузка для треугольников 
{
    while (true) //Бесконечный цикл
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру\n5. Отрисовать фигуру в файл\n6. Выход" << endl; //Выбор действия над фигурой
        int number;
        cin >> number;
        switch (number)
        { 
            case 1: //Поворот
            {
                shape.Rotate();
                break;
            }
            case 2: //Перемещение
            {
                shape.Translate();
                break;
            }
            case 3: //Увелечение
            {
                shape.Scale();
                break;
            }
            case 4: //Отрисовка
            {
                shape.Rendering();
                break;
            }
            case 5: //Отрисовка в файл
            {
                shape.RenderingInFile();
                break;
            }
            case 6: //Выход
            {
                cout << "Возвращаемся в меню" << endl;
                return 0;
            }
            default: //Другой вариант
            {
                cout << "Попробуйте еще раз" << endl;
            }
        }
    }
}

int SelectFunc(Quadrilateral& shape) //Выбор действия над фигурой, перегрузка для четрыехугольников 
{
    while (true) //Бесконечный цикл
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру\n5. Отрисовать фигуру в файл\n6. Выход" << endl; //Выбор действия над фигурой
        int number;
        cin >> number;
        switch (number)
        {
        case 1: //Поворот
        {
            shape.Rotate();
            break;
        }
        case 2: //Перемещение
        {
            shape.Translate();
            break;
        }
        case 3: //Увелечение
        {
            shape.Scale();
            break;
        }
        case 4: //Отрисовка
        {
            shape.Rendering();
            break;
        }
        case 5: //Отрисовка в файл
        {
            shape.RenderingInFile();
            break;
        }
        case 6: //Выход
        {
            cout << "Возвращаемся в меню" << endl;
            return 0;
        }
        default: //Другой вариант
        {
            cout << "Попробуйте еще раз" << endl;
        }
        }
    }
}

int SelectFunc(Line& shape) //Выбор действия над фигурой, перегрузка для линий 
{
    while (true) //Бесконечный цикл
    {
        cout << "1. Повернуть фигуру\n2. Переместить фигуру\n3. Увеличить фигуру на целое число\n4. Отрисовать фигуру\n5. Отрисовать фигуру в файл\n6. Выход" << endl; //Выбор действия над фигурой
        int number;
        cin >> number;
        switch (number)
        {
        case 1: //Поворот
        {
            shape.Rotate();
            break;
        }
        case 2: //Перемещение
        {
            shape.Translate();
            break;
        }
        case 3: //Увелечение
        {
            shape.Scale();
            break;
        }
        case 4: //Отрисовка
        {
            shape.Rendering();
            break;
        }
        case 5: //Отрисовка в файл
        {
            shape.RenderingInFile();
            break;
        }
        case 6: //Выход
        {
            cout << "Возвращаемся в меню" << endl;
            return 0;
        }
        default: //Другой вариант
        {
            cout << "Попробуйте еще раз" << endl;
        }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus"); //Устанавливаем локализатор
    bool go = true; //условие работы программы
    while(go)
    { 
        cout << "1. Треугольник\n2. Четырехугольник\n3. Линия\n4. Выход" << endl; //Выбор фигуры
        int number;
        cin >> number;
        switch (number)
        {
            case 1: //Треугольник
            {
                Triangle& tri = Triangle::SelectShape(); //Статический метод треугольников
                SelectFunc(tri);
                break;
            }
            case 2: //Четырехугольник
            {
                Quadrilateral& quad = Quadrilateral::SelectShape(); //Статический метод четырехугольников
                SelectFunc(quad);
                break;
            }
            case 3: //Линия
            {
                Line line; //Статический метод линий
                SelectFunc(line);
                break;
            }
            case 4: //Выход
            {
                go = false;
                cout << "До свидания" << endl;
                break;
            }
            default: //Другой любой ввод
            {
                cout << "Попробуйте еще раз" << endl;
            }
        }
    }
    return 1;
}