#pragma once
#include"Triangle.h"

class RightTriangle : public Triangle //����� ���������� �������������, ����������� �� ������ �������������
{
public:
	RightTriangle(); //�����������
	void Scale() override; //���������� ������
	void Rendering() override; //��������� ������
	std::string GetTriangleName()
	{
		return nameTriangle;
	};
private:
	int sizeSides; //������ �������
	std::string nameTriangle = "RightTriangle";
};
