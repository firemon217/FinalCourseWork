#pragma once
#include"RightTriangle.h"
#include<iostream>
#include<fstream>
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

void RightTriangle::Rendering() //Отрисовка фигуры
{
	int height = this->sizeSides + 1; //Выстота треугольника
	int size = this->sizeSides * 2 - 1; //Количество частиц для отрисовки
	for (int i = 0; i < positionY; i++)
	{
		cout << endl;
	}
	if(this->rotateDegrees == 0)
	{
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
	if (this->rotateDegrees == 180)
	{
		for (int i = height - 1; i >= 1; i--) //Проход по высотам треугольника
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
	
}

void RightTriangle::RenderingInFile() //Отрисовка фигуры
{
	ofstream file("RightTriangle.txt");
	int height = this->sizeSides + 1; //Выстота треугольника
	int size = this->sizeSides * 2 - 1; //Количество частиц для отрисовки
	for (int i = 0; i < positionY; i++)
	{
		file << endl;
	}
	if (this->rotateDegrees == 0)
	{
		for (int i = 1; i < height; i++) //Проход по высотам треугольника
		{
			for (int j = 0; j < size; j++) //Проход по длине высоты
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //Если находится на нужно координате, то отрисовывает частицу треугольника
				{
					for (int l = 0; l < positionX; l++)
					{
						file << " ";
					}
					for (int h = 0; h < i; h++)
					{
						file << "*";
						if (h != i - 1)
						{
							file << " ";
						}
					}
					break;
				}
				file << " ";
			}
			file << endl;
		}
	}
	if (this->rotateDegrees == 180)
	{
		for (int i = height - 1; i >= 1; i--) //Проход по высотам треугольника
		{
			for (int j = 0; j < size; j++) //Проход по длине высоты
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //Если находится на нужно координате, то отрисовывает частицу треугольника
				{
					for (int l = 0; l < positionX; l++)
					{
						file << " ";
					}
					for (int h = 0; h < i; h++)
					{
						file << "*";
						if (h != i - 1)
						{
							file << " ";
						}
					}
					break;
				}
				file << " ";
			}
			file << endl;
		}
	}

}

