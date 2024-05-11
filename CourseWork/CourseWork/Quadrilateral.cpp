#pragma once
#include<iostream>
#include<vector>
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include"Parallelogram.h"

using namespace std;

void Quadrilateral::Rotate() //??????????
{
	if (this->rotateDegrees == 0)
	{
		this->rotateDegrees = 90;
	}
	else if (this->rotateDegrees == 90)
	{
		this->rotateDegrees = 0;
	}
}

void Quadrilateral::Translate()
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

Quadrilateral& Quadrilateral::SelectShape()
{
	cout << "Выберите тип четырехугольника:\n1. Прямоугольник\n2. Параллелограм\n3. Трапеция" << endl;
	int n = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			Rectangle rec;
			return rec;
		}
		case 2:
		{
			Parallelogram par;
			return par;
		}
		case 3:
		{
			Trapezoid trap;
			return trap;
		}
	}
}