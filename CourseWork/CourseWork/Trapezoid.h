#pragma once
#include"Quadrilateral.h"

class Trapezoid : public Quadrilateral //����� ��������, ����������� �� ������ �����������������
{
public:
	Trapezoid(); //�����������
	void Scale() override; //���������� ������
	void Rendering(); //��������� ������
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int bigGround; //������� ���������
	int smallGround; //������� ����������
	std::string quadrilateralName = "Parallelogram";
};
#pragma once
