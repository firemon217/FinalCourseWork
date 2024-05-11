#include"Line.h"
#include<iostream>

using namespace std;

Line::Line() //�����������, � ������� �������� ������� �����
{
	cout << "������� ������ �����:" << endl;
	cin >> this->size;
	this->startCoordinate = this->positionX; //���������� ������ �����
	this->endCoordinate = this->positionX + size; //���������� ����� �����
}

void Line::Rotate() //������� �� 90 ��������:??????????
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

void Line::Translate() //����������� ����� �� ������������ �����������
{
	cout << "������� ���������� �������� ����� �� x:" << endl; 
	int x; //���������� �
	cin >> x;
	cout << "������� ���������� �������� ����� �� y:" << endl;
	int y; //���������� �
	cin >> y;
	this->positionX = x * 2; //����������� �� ���������� �
	this->positionY = y; //����������� �� ���������� �
}

void Line::Scale() //���������� �����
{
	cout << "������� ��������� ������� �����:" << endl;
	int multiplier; //���������
	cin >> multiplier;
	this->multiplier *= multiplier; //���������� ���������
	this->size *= multiplier; //����������� ������
}

void Line::Rendering() //��������� �����
{
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	if (this->rotateDegrees == 0) //���� ���� �������� 0
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
	else //���� ���� �������� 90
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