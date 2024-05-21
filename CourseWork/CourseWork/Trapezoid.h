#pragma once
#include"Quadrilateral.h"

class Trapezoid : public Quadrilateral //����� ��������, ����������� �� ������ �����������������
{
public:
	Trapezoid(); //�����������
	void Scale() override; //���������� ������
	void Rendering(); //��������� ������
	void RenderingInFile(); //��������� ������ � ����
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int bigGround; //������� ���������
	int smallGround; //������� ����������
	std::string quadrilateralName = "Trapezoid";
};

