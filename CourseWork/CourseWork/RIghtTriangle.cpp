#pragma once
#include"RightTriangle.h"
#include<iostream>
#include<fstream>
#include"math.h"

using namespace std;


RightTriangle::RightTriangle() //�����������, ������ ������� ������������
{
	cout << "������� ������ ������ ����������� ������������:" << endl;
	int size;
	cin >> size;
	this->sizeSides = size;
}

void RightTriangle::Scale() //���������� ������ ������������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->sizeSides *= multy;
}

void RightTriangle::Rendering() //��������� ������
{
	int height = this->sizeSides + 1; //������� ������������
	int size = this->sizeSides * 2 - 1; //���������� ������ ��� ���������
	for (int i = 0; i < positionY; i++)
	{
		cout << endl;
	}
	if(this->rotateDegrees == 0)
	{
		for (int i = 1; i < height; i++) //������ �� ������� ������������
		{
			for (int j = 0; j < size; j++) //������ �� ����� ������
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
				{
					for (int l = 0; l < positionX; l++)
					{
						cout << " ";
					}
					for (int h = 0; h < i; h++)
					{
						cout << "*";
						if (h != i - 1)
						{
							cout << " ";
						}
					}
					break;
				}
				cout << " ";
			}
			cout << endl;
		}
	}
	if (this->rotateDegrees == 180)
	{
		for (int i = height - 1; i >= 1; i--) //������ �� ������� ������������
		{
			for (int j = 0; j < size; j++) //������ �� ����� ������
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
				{
					for (int l = 0; l < positionX; l++)
					{
						cout << " ";
					}
					for (int h = 0; h < i; h++)
					{
						cout << "*";
						if (h != i - 1)
						{
							cout << " ";
						}
					}
					break;
				}
				cout << " ";
			}
			cout << endl;
		}
	}
	
}

void RightTriangle::RenderingInFile() //��������� ������
{
	ofstream file("RightTriangle.txt");
	int height = this->sizeSides + 1; //������� ������������
	int size = this->sizeSides * 2 - 1; //���������� ������ ��� ���������
	for (int i = 0; i < positionY; i++)
	{
		file << endl;
	}
	if (this->rotateDegrees == 0)
	{
		for (int i = 1; i < height; i++) //������ �� ������� ������������
		{
			for (int j = 0; j < size; j++) //������ �� ����� ������
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
				{
					for (int l = 0; l < positionX; l++)
					{
						file << " ";
					}
					for (int h = 0; h < i; h++)
					{
						file << "*";
						if (h != i - 1)
						{
							file << " ";
						}
					}
					break;
				}
				file << " ";
			}
			file << endl;
		}
	}
	if (this->rotateDegrees == 180)
	{
		for (int i = height - 1; i >= 1; i--) //������ �� ������� ������������
		{
			for (int j = 0; j < size; j++) //������ �� ����� ������
			{
				if ((j == (size - (2 * i - 1)) / 2 + 1)) //���� ��������� �� ����� ����������, �� ������������ ������� ������������
				{
					for (int l = 0; l < positionX; l++)
					{
						file << " ";
					}
					for (int h = 0; h < i; h++)
					{
						file << "*";
						if (h != i - 1)
						{
							file << " ";
						}
					}
					break;
				}
				file << " ";
			}
			file << endl;
		}
	}

}

