#pragma once
#include"Triangle.h"
#include"RightTriangle.h"
#include"RightDegreeTriangle.h"
#include<iostream>
#include<vector>

using namespace std;

void Triangle::Rotate() //??????????
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

Triangle& Triangle::SelectShape()
{

	cout << "Выберите тип треугольника:\n1. Правильный треугольник\n2. Прямоугольниый треугольник" << endl;
	int n = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			RightTriangle rightTri;
			return rightTri;
		}
		case 2:
		{
			RightDegreeTriangle rightDegreeTri;
			return rightDegreeTri;
		}

	}
}
