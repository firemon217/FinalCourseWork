#pragma once
#include"Quadrilateral.h"

class Rectangle : public Quadrilateral //����� ���������������, ����������� �� ������ �����������������
{
public:
	Rectangle(); //�����������
	void Scale() override; //���������� ������
	void Rendering(); //��������� ������
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int height; //������
	int width; //������
	std::string quadrilateralName = "Rectangle";
};