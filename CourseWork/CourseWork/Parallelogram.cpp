#include"Parallelogram.h"
#include<iostream>
#include"math.h"

using namespace std;

Parallelogram::Parallelogram() //Констурктор, задает размеры параллелограмма
{
	cout << "Введите высоту параллелограмма:" << endl;
	cin >> this->height;
	cout << "Введите длинну основания параллелограмма:" << endl;
	cin >> this->width;

}

void Parallelogram::Scale() //Увеличение сторон параллелограмма
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->height *= multy;
	this->width *= multy;
}

void Parallelogram::Rendering() //Отрисовка параллелограмма
{
	int height = this->height; //Высота
	int width = this->width; //Длина
	if (this->rotateDegrees == 90) //Учитывание поворота параллелограмма
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
		for (int g = 0; g < this->positionX; g++)
		{
			cout << " ";
		}
		for (int l = 0; l < i; l++)
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
