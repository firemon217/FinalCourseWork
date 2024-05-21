#pragma once
#include<iostream>
#include<vector>
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include"Parallelogram.h"

using namespace std;

void Quadrilateral::Rotate() //Поворот фигуры на 90 градусов
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

Quadrilateral& Quadrilateral::SelectShape() //Выбор и возврат наследника
{
	cout << "Выберите тип четырехугольника:\n1. Прямоугольник\n2. Параллелограм\n3. Трапеция" << endl;
	int n = 0; //Выбор
	cin >> n;
	switch (n)
	{
		case 1: //Прямоугольник
		{
			Rectangle rec; //Создает экземпляр прямоугольника
			return rec;
		}
		case 2: //Параллелепипед
		{
			Parallelogram par; //Создает экземпляр параллелепипеда
			return par;
		}
		case 3: //Трапеция 
		{
			Trapezoid trap; //Создает экземпляр трапеции
			return trap;
		}
	}
}