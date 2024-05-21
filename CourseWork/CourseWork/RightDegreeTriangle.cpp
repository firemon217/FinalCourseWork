#pragma once
#include<iostream>
#include<fstream>
#include"RightDegreeTriangle.h"
#include"math.h"

using namespace std;

RightDegreeTriangle::RightDegreeTriangle() //�����������, ������ �������������� �������� ������� � ���������� �������������� ������������
{
	cout << "������� ������ ������� ������:" << endl;
	cin >> this->sideA; //������ �����
	cout << "������� ������ ������� ������:" << endl;
	cin >> this->sideB; //������ �����
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2)); //���������� ����������
}

void RightDegreeTriangle::Scale() //���������� ������ �������������� ������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy; //�������� �� ���� ���������
	this->multiplier *= multy; //����������� ��������� ������
	this->sideA *= multy; //����������� ������� ������ �� ���������
	this->sideB *= multy;
	this->hypotenuse = sqrt(pow(this->sideA, 2) + pow(this->sideB, 2));
}

void RightDegreeTriangle::Rendering() //����������/��������!!!!!!!!!!!!!!
{
	int n;
	int sideA = this->sideA;
	int sideB = this->sideB;
	if (this->rotateDegrees == 180)
	{
		sideA = this->sideB;
		sideB = this->sideA;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	for (int i = 1; i <= sideB; i++)
	{
		for (int l = 0; l < this->positionX; l++)
		{
			cout << " ";
		}
		n = ceil((double)i * sideA / sideB);
		for (int j = 1; j <= n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void RightDegreeTriangle::RenderingInFile() //����������/��������!!!!!!!!!!!!!!
{
	ofstream file("RightDegreeTriangle.txt");
	int n;
	int sideA = this->sideA;
	int sideB = this->sideB;
	if (this->rotateDegrees == 180)
	{
		sideA = this->sideB;
		sideB = this->sideA;
	}
	for (int i = 0; i < this->positionY; i++)
	{
		file << endl;
	}
	for (int i = 1; i <= sideB; i++)
	{
		for (int l = 0; l < this->positionX; l++)
		{
			file << " ";
		}
		n = ceil((double)i * sideA / sideB);
		for (int j = 1; j <= n; j++)
		{
			file << "* ";
		}
		file << endl;
	}
}


