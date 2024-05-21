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
		void RenderingInFile(); //��������� ������ � ����
		std::string GetLineName()
		{
			return this->nameLine;
		};
	private:
		int size; //������ �����
		std::string nameLine = "Line";
		int positionX = 0; //������� �� x
		int positionY = 0; //������� �� y
		int rotateDegrees = 0; //���� ��������
		int multiplier = 1; //��������� �������
}; 