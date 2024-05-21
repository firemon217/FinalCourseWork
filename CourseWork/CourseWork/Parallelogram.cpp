#include"Parallelogram.h"
#include<iostream>
#include<fstream>
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
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		if (this->rotateDegrees == 90)
		{
			for (int g = 0; g < height - i; g++)
			{
				cout << " ";
			}
		}
		else
		{
			for (int g = 0; g < i; g++)
			{
				cout << " ";
			}
		}
		for (int j = 0; j < width; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}
}

void Parallelogram::RenderingInFile() //��������� ���������������
{
	ofstream file("Parallelogram.txt");
	int height = this->height; //������
	int width = this->width; //�����
	if (this->rotateDegrees == 90) //���������� �������� ���������������
	{
		height = this->width;
		width = this->height;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		file << endl;
	}
	for (int i = 0; i < height; i++) //���������
	{
		for (int l = 0; l < this->positionX; l++)
		{
			file << " ";
		}
		if (this->rotateDegrees == 90)
		{
			for (int g = 0; g < height - i; g++)
			{
				file << " ";
			}
		}
		else
		{
			for (int g = 0; g < i; g++)
			{
				file << " ";
			}
		}
		for (int j = 0; j < width; j++)
		{
			file << "# ";
		}
		file << endl;
	}
}
