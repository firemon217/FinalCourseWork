#include"Rectangle.h"
#include<iostream>
#include<fstream>
#include"math.h"

using namespace std;

Rectangle::Rectangle() //�����������, ������ ������� ��������������
{
	cout << "������� ������ ��������������:" << endl;
	cin >> this->height;
	cout << "������� ������ ��������������:" << endl;
	cin >> this->width;
	
}

void Rectangle::Scale() //���������� ������ �������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->height *= multy;
	this->width *= multy;
}

void Rectangle::Rendering() //��������� ��������������
{
	int height = this->height; //������
	int width = this->width; //�����
	if (this->rotateDegrees == 90) //���������� �������� ��������������
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
		for (int j = 0; j < width; j++)
		{
			cout << "# ";
		}
		cout << endl;
	}
}

void Rectangle::RenderingInFile() //��������� ��������������
{
	ofstream file("Rectangle.txt");
	int height = this->height; //������
	int width = this->width; //�����
	if (this->rotateDegrees == 90) //���������� �������� ��������������
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
		for (int j = 0; j < width; j++)
		{
			file << "# ";
		}
		file << endl;
	}
}


