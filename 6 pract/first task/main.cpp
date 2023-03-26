#include <iostream>
#include <cmath>
#include <windows.h>
#include "cone.h"

using namespace std;

int main()
{
    Cone c1(3, 7);              // Конус с центром в начале координат с радиусом 3 и выотой 7
    Cone c2(1, 2, 3, 5, 10);    // Произвольный конус
    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";
    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";
    return 0;
}