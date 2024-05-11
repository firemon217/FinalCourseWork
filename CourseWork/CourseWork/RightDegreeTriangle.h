#pragma once
#include"Triangle.h"

class RightDegreeTriangle : public Triangle //����� ������������� �������������, ����������� �� ������ �������������
{
public:
	RightDegreeTriangle(); //�����������
	void Scale() override; //���������� ������
	void Rendering() override; //��������� ������
	std::string GetTriangleName()
	{
		return nameTriangle;
	};
private:
	int sideA; //������ ������� ������
	int sideB; //������ ������� ������
	double hypotenuse; //������ ����������
	std::string nameTriangle = "RightDegreeTriangle";
};
