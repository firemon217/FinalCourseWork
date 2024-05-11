#pragma once
#include"Quadrilateral.h"

class Trapezoid : public Quadrilateral //Класс трапеции, наследуемый от класса четырехугольников
{
public:
	Trapezoid(); //Конструктор
	void Scale() override; //Увелечение фигуры
	void Rendering(); //Отрисовка фигуры
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int bigGround; //большее основание
	int smallGround; //меньшее освнование
	std::string quadrilateralName = "Parallelogram";
};
#pragma once
