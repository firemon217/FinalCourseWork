#pragma once
#include<string>

class Quadrilateral //Класс четырехугольников, наследуемый от класса Фигур
{
public:
	void Rotate(); //Поворот фигуры
	void Translate(); //Перемещение по оси фигуры
	virtual void Scale() = 0; //Увеличение размеров фигуры
	virtual void Rendering() = 0; //Отрисовка фигуры
	virtual std::string GetQuadrilateralName() = 0;
	static Quadrilateral& SelectShape();
protected:
	int positionX = 0; //Позиция по x
	int positionY = 0; //Позиция по y
	int rotateDegrees = 0; //Угол поворота
	int multiplier = 1; //Множитель размера
};

