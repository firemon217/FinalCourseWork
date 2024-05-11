#include"Trapezoid.h"
#include<iostream>
#include"math.h"

using namespace std;

Trapezoid::Trapezoid() //Констурктор, задает размеры трапеции
{
	cout << "Введите большее основание трапеции:" << endl;
	cin >> this->bigGround;
	cout << "Введите высоту трапеции:" << endl;
	cin >> this->smallGround;

}

void Trapezoid::Scale() //Увеличение сторон трапеции
{
	cout << "Введите множитель увеличения:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->smallGround *= multy;
	this->bigGround *= multy;
}

void Trapezoid::Rendering() //Отрисовка трапеции
{
	int smallGround = this->smallGround; //Высота
	int bigGround = this->bigGround; //Длина
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	double proc;
	for (int i = 0; i <= bigGround - smallGround; i+=2) //Отрисовка
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (bigGround - smallGround - i)/2; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= smallGround+i; j++)
		{
			cout << "#";
		}
		cout << endl;
	}
}
