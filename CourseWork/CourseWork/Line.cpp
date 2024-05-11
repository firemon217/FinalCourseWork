#include"Line.h"
#include<iostream>

using namespace std;

Line::Line() //Конструктор, в котором задаются размеры линии
{
	cout << "Введите размер линии:" << endl;
	cin >> this->size;
	this->startCoordinate = this->positionX; //Координата начала линии
	this->endCoordinate = this->positionX + size; //координата конца линии
}

void Line::Rotate() //Поворот на 90 градусов:??????????
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

void Line::Translate() //Перемещение линии по определенным координатам
{
	cout << "Введите координату смещения линии по x:" << endl; 
	int x; //Расстояние х
	cin >> x;
	cout << "Введите координату смещения линии по y:" << endl;
	int y; //Расстояние у
	cin >> y;
	this->positionX = x * 2; //Перемещение на расстояние х
	this->positionY = y; //Перемещение на расстояние у
}

void Line::Scale() //Увеличение линии
{
	cout << "Введите множитель размера линии:" << endl;
	int multiplier; //Множитель
	cin >> multiplier;
	this->multiplier *= multiplier; //Запоминаем множитель
	this->size *= multiplier; //Увеличиваем размер
}

void Line::Rendering() //Отрисовка линии
{
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	if (this->rotateDegrees == 0) //Если угол поворота 0
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		for (int i = 0; i < this->size; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	else //Если угол поворота 90
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		for (int i = 0; i < this->size; i++)
		{
			cout << "*" << endl;
		}
	}
}

Line& Line::SelectShape()
{
	Line line;
	return line;
}