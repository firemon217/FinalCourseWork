#pragma once
#include<string>

class Line //����� �����, ����������� �� ������ �����
{
	public:
		Line(); //�����������
		void Rotate(); //������� ������
		void Translate(); //����������� �� ��� ������
		void Scale(); //���������� �������� ������
		void Rendering(); //��������� ������
		static Line& SelectShape();
		std::string GetLineName()
		{
			return nameLine;
		};
	private:
		int size; //������ �����
		int startCoordinate; //���������� ������ �����
		int endCoordinate; //���������� ����� �����
		std::string nameLine = "Line";
		int positionX = 0; //������� �� x
		int positionY = 0; //������� �� y
		int rotateDegrees = 0; //���� ��������
		int multiplier = 1; //��������� �������
}; 