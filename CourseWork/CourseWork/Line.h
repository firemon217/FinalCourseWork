#pragma once
#include<string>

class Line //Класс Линий, наследуемый от класса Фигур
{
	public:
		Line(); //Конструктор
		void Rotate(); //Поворот фигуры
		void Translate(); //Перемещение по оси фигуры
		void Scale(); //Увеличение размеров фигуры
		void Rendering(); //Отрисовка фигуры
		void RenderingInFile(); //Отрисовка фигуры в файл
		std::string GetLineName()
		{
			return this->nameLine;
		};
	private:
		int size; //Размер линии
		std::string nameLine = "Line";
		int positionX = 0; //Позиция по x
		int positionY = 0; //Позиция по y
		int rotateDegrees = 0; //Угол поворота
		int multiplier = 1; //Множитель размера
}; 