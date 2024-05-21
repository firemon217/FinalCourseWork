#pragma once
#include"Quadrilateral.h"

class Parallelogram : public Quadrilateral //Класс параллелограмма, наследуемый от класса четырехугольников
{
public:
	Parallelogram(); //Конструктор
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
	std::string quadrilateralName = "Parallelogram";
};
