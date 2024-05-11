#pragma once
#include<string>

class Triangle //����� �������������, ����������� �� ������ �����
{
public:
	void Rotate(); //������� ������
	void Translate(); //����������� �� ��� ������
	virtual void Scale() = 0; //���������� �������� ������
	virtual void Rendering() = 0; //��������� ������
	virtual std::string GetTriangleName() = 0;
	static Triangle& SelectShape();
protected:
	int positionX = 0; //������� �� x
	int positionY = 0; //������� �� y
	int rotateDegrees = 0; //���� ��������
	int multiplier = 1; //��������� �������
};
