#include <iostream>
#include <cmath>
#include <windows.h>
#include "conoid.h"

using namespace std;

int main()
{
    Conoid c1(3, 2, 7);              // Конус с центром в начале координат с радиусом 3 и выотой 7
    Conoid c2(1, 2, 3, 5, 4, 10);    // Произвольный конус
    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";
    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n";
    cout << "===============================" << endl;
    Conoid obj;
    cout << "Введите x, y, z, r1, r2, h: " << endl;;
    cin >> obj;
    cout << "Конус 3: " << obj;
    cout << "Площадь поверхности: " << obj.area() << "\n";
    cout << "Объем: " << obj.volume() << "\n";
    cout << "===============================" << endl;
    cout << "Сравним конус 1 и конус 2, предположим что к1 = к2: ";
    bool check = (c1 == c2);
    cout << check;
    cout << endl;
    cout << "Сравним конус 1 и конус 2, предположим что к1 >= к2: ";
    check = (c1 >= c2);
    cout << check;
    return 0;
}