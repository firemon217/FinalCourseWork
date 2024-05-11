#pragma once
#include"Quadrilateral.h"

class Parallelogram : public Quadrilateral //����� ���������������, ����������� �� ������ �����������������
{
public:
	Parallelogram(); //�����������
	void Scale() override; //���������� ������
	void Rendering(); //��������� ������
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int height; //������
	int width; //������
	std::string quadrilateralName = "Parallelogram";
};
