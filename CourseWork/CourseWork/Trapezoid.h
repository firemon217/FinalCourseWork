#pragma once
#include"Quadrilateral.h"

class Trapezoid : public Quadrilateral //Класс трапеции, наследуемый от класса четырехугольников
{
public:
	Trapezoid(); //Конструктор
	void Scale() override; //Увелечение фигуры
	void Rendering(); //Отрисовка фигуры
	void RenderingInFile(); //Отрисовка фигуры в файл
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int bigGround; //большее основание
	int smallGround; //меньшее освнование
	std::string quadrilateralName = "Trapezoid";
};

