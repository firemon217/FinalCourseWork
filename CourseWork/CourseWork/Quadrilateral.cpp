#pragma once
#include<iostream>
#include<vector>
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include"Parallelogram.h"

using namespace std;

void Quadrilateral::Rotate() //??????????
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

void Quadrilateral::Translate()
{
	cout << "������� ���������� �������� ����� �� x:" << endl;
	int x; //���������� ����������� �� �
	cin >> x;
	cout << "������� ���������� �������� ����� �� y:" << endl;
	int y; //���������� ����������� �� �
	cin >> y;
	this->positionX += x * 2; //���������� ����������� �� �
	this->positionY += y; //���������� ����������� �� �
}

Quadrilateral& Quadrilateral::SelectShape()
{
	cout << "�������� ��� ����������������:\n1. �������������\n2. �������������\n3. ��������" << endl;
	int n = 0;
	cin >> n;
	switch (n)
	{
		case 1:
		{
			Rectangle rec;
			return rec;
		}
		case 2:
		{
			Parallelogram par;
			return par;
		}
		case 3:
		{
			Trapezoid trap;
			return trap;
		}
	}
}