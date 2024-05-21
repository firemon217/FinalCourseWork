#pragma once
#include"Triangle.h"
#include"RightTriangle.h"
#include"RightDegreeTriangle.h"
#include<iostream>
#include<vector>

using namespace std;

void Triangle::Rotate() //Поворот фигуры на 180 градусов
{
	if (this->rotateDegrees == 0)
	{
		this->rotateDegrees = 180;
	}
	else if (this->rotateDegrees == 180)
	{
		this->rotateDegrees = 0;
	}
}

void Triangle::Translate() //Перемещает треугольник на определенные координаты
{
	cout << "Введите координату смещения линии по x:" << endl;
	int x; //Координата перемещения по х
	cin >> x;
	cout << "Введите координату смещения линии по y:" << endl;
	int y; //Координата перемещения по н
	cin >> y;
	this->positionX += x * 2; //Назначение перемещения по х
	this->positionY += y; //Назначение перемещения по у
}

Triangle& Triangle::SelectShape() //Выбор и возврат наследника
{

	cout << "Выберите тип треугольника:\n1. Правильный треугольник\n2. Прямоугольниый треугольник" << endl;
	int n = 0; //Выбор
	cin >> n;
	switch (n)
	{
		case 1: //Правильный треугольник
		{
			RightTriangle rightTri; //Создает экземпляр правильного треугольника
			return rightTri;
		}
		case 2: //Прямоугольный треугольник
		{
			RightDegreeTriangle rightDegreeTri; //Создает экземпляр прямоугольного треугольника
			return rightDegreeTri;
		}

	}
}
