#include"Parallelogram.h"
#include<iostream>
#include"math.h"

using namespace std;

Parallelogram::Parallelogram() //�����������, ������ ������� ���������������
{
	cout << "������� ������ ���������������:" << endl;
	cin >> this->height;
	cout << "������� ������ ��������� ���������������:" << endl;
	cin >> this->width;

}

void Parallelogram::Scale() //���������� ������ ���������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->height *= multy;
	this->width *= multy;
}

void Parallelogram::Rendering() //��������� ���������������
{
	int height = this->height; //������
	int width = this->width; //�����
	if (this->rotateDegrees == 90) //���������� �������� ���������������
	{
		height = this->width;
		width = this->height;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	for (int i = 0; i < height; i++) //���������
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
