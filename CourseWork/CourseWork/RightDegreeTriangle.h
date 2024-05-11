#pragma once
#include"Triangle.h"

class RightDegreeTriangle : public Triangle //Класс прямоугольных треугольников, наследуемый от класса Треугольников
{
public:
	RightDegreeTriangle(); //Конструктор
	void Scale() override; //Увелечение фигуры
	void Rendering() override; //Отрисовка фигуры
	std::string GetTriangleName()
	{
		return nameTriangle;
	};
private:
	int sideA; //Размер первого катета
	int sideB; //Размер второго катета
	double hypotenuse; //Размер гипотенузы
	std::string nameTriangle = "RightDegreeTriangle";
};
