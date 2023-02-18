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
            return ((a * b * c) / (4 * square_tr(a, b, c))) == radius;
        };
        bool triangle_in (float a, float b, float c) {
            return (square_tr(a, b, c) / ((a + b + c) / 2)) == radius;
        };
        bool check_circle (float r, float x_cntr, float y_cntr) {
            return (sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2)) < (r + radius));
        }
};

int genR() {
    srand(time(nullptr));
    return rand() % 10;
};

int main() {
    circle myObj;
    myObj.set_circle(genR(), genR(), genR());
    cout << myObj.square_tr(genR(), genR(), genR()) << endl;
    cout << myObj.triangle_around(genR(), genR(), genR()) << endl;
    cout << myObj.square() << endl;
    return 0;
};