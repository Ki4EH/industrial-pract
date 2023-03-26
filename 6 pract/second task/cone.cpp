#include <iostream>
#include <cmath>
#include <windows.h>
#include "cone.h"
using namespace std;

const double pi = 3.14159265;
// Конструктор с центром в начале координат
Cone::Cone(double r, double h) {
    x = y = z = 0.0;
    r1 = r;
    this->h = h;
}
// Конструктор для Cone
Cone::Cone(double a, double b, double c, double r, double h) {
    x = a;
    y = b;
    z = c;
    r1 = r;
    this->h = h;
}

// Функции доступа
void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void Cone::setRadius(double r) { r1 = r; }
void Cone::setHeight(double h) { this->h = h; }
double Cone::getRadius() { return r1; }
double Cone::getHeight() { return h; }

// Площадь полной поверхности
double Cone::area() {
    double l = sqrt(h * h + r1 * r1);
    return pi * r1 * (r1 + l);
}
// Объем
double Cone::volume() {
    return pi * r1 * r1 * h / 3;
}
// Вывод данных конуса
ostream &operator<<(ostream &stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.r1 << " ";
    stream << "h=" << obj.h << "\n";
    return stream;
};