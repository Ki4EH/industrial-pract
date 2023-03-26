#include <iostream>
class Cone {
    public:
        double x, y, z;        // трехмерные координаты
        double r1;         // радиус
        double h;
        // Конструктор по умолчанию
        Cone() { x=y=z=r1=h=0; }
        // Конструктор с центром в начале координат
        Cone(double r, double h);
        // Конструктор для Cone
        Cone(double a, double b, double c, double r, double h);
        // Функции доступа
        void setCoordinate(double a, double b, double c);
        void setRadius(double r);
        void setHeight(double h);
        double getRadius();
        double getHeight();
        // Площадь полной поверхности
        double area();
        // Объем
        double volume();
        // Перегрузка оператора вывода
        friend std::ostream &operator<<(std::ostream &stream, Cone obj);
};