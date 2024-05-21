#pragma once
#include"Triangle.h"

class RightTriangle : public Triangle //Класс правильный треугольников, наследуемый от класса Треугольников
{
public:
	RightTriangle(); //Конструктор
	void Scale() override; //Увелечение фигуры
	void Rendering() override; //Отрисовка фигуры
	void RenderingInFile() override; //Отрисовка фигуры в файл
	std::string GetTriangleName()
	{
		return nameTriangle;
	};
private:
	int sizeSides; //Размер стороны
	std::string nameTriangle = "RightTriangle";
};
