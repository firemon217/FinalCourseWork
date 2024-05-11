#include"Rectangle.h"
#include<iostream>
#include"math.h"

using namespace std;

Rectangle::Rectangle() //Констурктор, задает размеры прямоугольника
{
	cout << "Введите высоту прямоугольника:" << endl;
	cin >> this->height;
	cout << "Введите ширину прямоугольника:" << endl;
	cin >> this->width;
	
}

void Rectangle::Scale() //Увеличение сторон прямогульника
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->height *= multy;
	this->width *= multy;
}

void Rectangle::Rendering() //Отрисовка прямоугольника
{
	int height = this->height; //Высота
	int width = this->width; //Длина
	if (this->rotateDegrees == 90) //Учитывание поворота прямоугольника
	{
		height = this->width; 
		width = this->height;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	for (int i = 0; i < height; i++) //Отрисовка
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		for (int j = 0; j < width; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}
}

