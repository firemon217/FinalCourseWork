#include"Trapezoid.h"
#include<iostream>
#include"math.h"

using namespace std;

Trapezoid::Trapezoid() //�����������, ������ ������� ��������
{
	cout << "������� ������� ��������� ��������:" << endl;
	cin >> this->bigGround;
	cout << "������� ������ ��������:" << endl;
	cin >> this->smallGround;

}

void Trapezoid::Scale() //���������� ������ ��������
{
	cout << "������� ��������� ����������:" << endl;
	int multy;
	cin >> multy;
	this->multiplier *= multy;
	this->smallGround *= multy;
	this->bigGround *= multy;
}

void Trapezoid::Rendering() //��������� ��������
{
	int smallGround = this->smallGround; //������
	int bigGround = this->bigGround; //�����
	for (int i = 0; i < this->positionY; i++)
	{
		cout << endl;
	}
	double proc;
	for (int i = 0; i <= bigGround - smallGround; i+=2) //���������
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
