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
		static Line& SelectShape();
		std::string GetLineName()
		{
			return nameLine;
		};
	private:
		int size; //Размер линии
		int startCoordinate; //Координата начала линии
		int endCoordinate; //координата конца линии
		std::string nameLine = "Line";
		int positionX = 0; //Позиция по x
		int positionY = 0; //Позиция по y
		int rotateDegrees = 0; //Угол поворота
		int multiplier = 1; //Множитель размера
}; 