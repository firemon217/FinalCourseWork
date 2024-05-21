#pragma once
#include"Triangle.h"
#include"RightTriangle.h"
#include"RightDegreeTriangle.h"
#include<iostream>
#include<vector>

using namespace std;

void Triangle::Rotate() //������� ������ �� 180 ��������
{
	if (this->rotateDegrees == 0)
	{
		this->rotateDegrees = 180;
	}
	else if (this->rotateDegrees == 180)
	{
		this->rotateDegrees = 0;
	}
}

void Triangle::Translate() //���������� ����������� �� ������������ ����������
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

Triangle& Triangle::SelectShape() //����� � ������� ����������
{

	cout << "�������� ��� ������������:\n1. ���������� �����������\n2. �������������� �����������" << endl;
	int n = 0; //�����
	cin >> n;
	switch (n)
	{
		case 1: //���������� �����������
		{
			RightTriangle rightTri; //������� ��������� ����������� ������������
			return rightTri;
		}
		case 2: //������������� �����������
		{
			RightDegreeTriangle rightDegreeTri; //������� ��������� �������������� ������������
			return rightDegreeTri;
		}

	}
}
