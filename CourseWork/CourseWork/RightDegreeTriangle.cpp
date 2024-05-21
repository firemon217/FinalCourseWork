#pragma once
#include<iostream>
#include<fstream>
#include"RightDegreeTriangle.h"
#include"math.h"

using namespace std;

RightDegreeTriangle::RightDegreeTriangle() //Конструктор, задает первоначальные значения катетам и гипотенузе прямоугольного треугольника
{
	cout << "Введите размер первого катета:" << endl;
	cin >> this->sideA; //Первый катет
	cout << "Введите размер второго катета:" << endl;
	cin >> this->sideB; //Второй катет
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2)); //Вычисление гипотенузы
}

void RightDegreeTriangle::Scale() //Увеличение сторон прямоугольного треугольника
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy; //Получаем на вход множитель
	this->multiplier *= multy; //Увеличиваем мнодитель фигуры
	this->sideA *= multy; //Увеличиваем стороны фигуры на множитель
	this->sideB *= multy;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2));
}

void RightDegreeTriangle::Rendering() //Доработать/Додумать!!!!!!!!!!!!!!
{
	int n;
	int sideA = this->sideA;
	int sideB = this->sideB;
	if (this->rotateDegrees == 180)
	{
		sideA = this->sideB;
		sideB = this->sideA;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	for (int i = 1; i <= sideB; i++)
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		n = ceil((double)i * sideA / sideB);
		for (int j = 1; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void RightDegreeTriangle::RenderingInFile() //Доработать/Додумать!!!!!!!!!!!!!!
{
	ofstream file("RightDegreeTriangle.txt");
	int n;
	int sideA = this->sideA;
	int sideB = this->sideB;
	if (this->rotateDegrees == 180)
	{
		sideA = this->sideB;
		sideB = this->sideA;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		file << endl;
	}
	for (int i = 1; i <= sideB; i++)
	{
		for (int l = 0; l < this->positionX; l++)
		{
			file << " ";
		}
		n = ceil((double)i * sideA / sideB);
		for (int j = 1; j <= n; j++)
		{
			file << "* ";
		}
		file << endl;
	}
}


