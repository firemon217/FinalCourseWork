#pragma once
#include"Quadrilateral.h"

class Rectangle : public Quadrilateral //Класс прямоугольников, наследуемый от класса четырехугольников
{
public:
	Rectangle(); //Конструктор
	void Scale() override; //Увелечение фигуры
	void Rendering(); //Отрисовка фигуры
	void RenderingInFile(); //Отрисовка фигуры в файл
	std::string GetQuadrilateralName()
	{
		return this->quadrilateralName;
	}
private:
	int height; //Высота
	int width; //Ширина
	std::string quadrilateralName = "Rectangle";
};
