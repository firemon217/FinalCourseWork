#pragma once
#include"RightTriangle.h"
#include<iostream>
#include"math.h"

using namespace std;


RightTriangle::RightTriangle() //Констурктор, задает размеры треугольника
{
	cout << "Введите размер сторон правильного треугольника:" << endl;
	int size;
	cin >> size;
	this->sizeSides = size;
}

void RightTriangle::Scale() //Увеличение сторон треугольника
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->sizeSides *= multy;
}

void RenderingDeg90(int height, int size, int positionX, int positionY) //Отрисовка треугольника с поворотом в 90 градусов
{
	for (int i = 0; i < positionY; i++)
	{
		cout << endl;
	}
	for (int i = height; i >= 1; i--) //Проход по высотам треугольника
	{
		for (int j = 0; j < size; j++) //Проход по длине высоты
		{
			if ((j == (size - (2 * i - 1)) / 2 + 1)) //Если находится на нужно координате, то отрисовывает частицу треугольника
			{
				for (int l = 0; l < positionX; l++)
				{
					cout << " ";
				}
				for (int h = 0; h < i; h++)
				{
					cout << "*";
					if (h != i - 1)
					{
						cout << " ";
					}
				}
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
}

void RenderingDeg0(int height, int size, int positionX, int positionY) //Отрисовка треугольника без поворота
{
	for (int i = 0; i < positionY; i++)
	{
		cout << endl;
	}
	for (int i = 1; i < height; i++) //Проход по высотам треугольника
	{
		for (int j = 0; j < size; j++) //Проход по длине высоты
		{
			if ((j == (size - (2 * i - 1)) / 2 + 1)) //Если находится на нужно координате, то отрисовывает частицу треугольника
			{
				for (int l = 0; l < positionX; l++)
				{
					cout << " ";
				}
				for (int h = 0; h < i; h++)
				{
					cout << "*";
					if (h != i - 1)
					{
						cout << " ";
					}
				}
				break;
			}
			cout << " ";
		}
		cout << endl;
	}
}

void RightTriangle::Rendering() //Отрисовка фигуры
{
	int height = this->sizeSides + 1; //Выстота треугольника
	int size = this->sizeSides * 2 - 1; //Количество частиц для отрисовки
	if(this->rotateDegrees == 0)
	{
		RenderingDeg0(height, size, this->positionX, this->positionY);
	}
	if (this->rotateDegrees == 180)
	{
		RenderingDeg90(height, size, this->positionX, this->positionY);
	}
	
}


