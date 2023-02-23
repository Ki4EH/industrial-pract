#include <iostream>
#include "circle.h"

using namespace std;

bool exist_tr(double a, double b,double c) {
    return ((a + b > c) && (b + c > a) && (a + c > b));
};

int main() {
    double r, x , y, a, b, c;
    circle myObjc = circle(0, 0, 0);
    for (int i = 0; i < 3; i++)
    {
    cout << "Generate circle (input radius, x center, y center):";
    cin >> r >> x >> y;
    cout << endl;
    myObjc.set_circle(r, x, y);
    srand(time(nullptr));
    a = (rand() % 10);
    b = (rand() % 10);
    c = (rand() % 10);
    do
    {
        a = (rand() % 10);
        b = (rand() % 10);
        c = (rand() % 10);
    } while (exist_tr(a, b, c) != 1);
    
    cout << "Random generated square triangle with sides: " << a << " " << b << " " << c << endl;
    cout << "Square triangle: " << myObjc.square_tr(a, b, c) << endl;
    cout << "Square circle: " << myObjc.square() << endl;
    cout << "Triangle around: " << myObjc.triangle_around(a, b, c) << endl;
    cout << "Triangle in circle: " << myObjc.triangle_in(a, b, c) << endl;
    srand(time(nullptr));
    double r_g = rand() % 10;
    double x_g = rand() % 10;
    double y_g = rand() % 10;
    cout << "Generated circle with (radius, x_cnt, y_cnt): " << r_g << " " << x_g << " " << y_g << endl;
    cout << "Check if generated circle cross with given circle: " << myObjc.check_circle(r_g, x_g, y_g) << endl;
    cout << endl;
    };
};