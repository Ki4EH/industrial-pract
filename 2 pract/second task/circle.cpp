#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <ctime>

using namespace std;

class circle {
    double a, b, c;
    private:
        float radius;
        float x_center;
        float y_center;
    public:
        circle (float r, float x, float y) {
            radius = r;
            x_center = x;
            y_center = y;
        };
        circle () {
            radius = 0;
            x_center = 0;
            y_center = 0;
        };
        double set_circle (float r, float x, float y) {
            radius = r;
            x_center = x;
            y_center = y;
            return 0;
        };
        float square() {
            return M_PI * pow(radius, 2);
        };
        double square_tr(double a, double b, double c) {
            double p = (a + b + c) / 2;
            double s = sqrt(p * (p - a) * (p - b) * (p - c));
            return s;
        };
        bool triangle_around (float a, float b, float c) {
            return bool(((a * b * c) / (4 * square_tr(a, b, c))) == radius);
        };
        bool triangle_in (float a, float b, float c) {
            return bool((square_tr(a, b, c) / ((a + b + c) / 2)) == radius);
        };
        bool check_circle (float r, float x_cntr, float y_cntr) {
            return (sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2)) < (r + radius));
        }
};

bool exist_tr(double a, double b,double c) {
    return ((a + b > c) && (b + c > a) && (a + c > b));
};

int main() {
    circle myObjc;
    double r, x , y, a, b, c;
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
    
    cout << "Random generated square with sides: " << a << " " << b << " " << c << endl;
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