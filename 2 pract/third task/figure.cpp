#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;


double figure::distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
};
double figure::angleBetweenVectors(double x1, double x2, double y1, double y2) {
    double dotProduct = x1 * y1 + x2 * y2;
    double magnitude1 = sqrt(x1 * x1 + x2 * x2);
    double magnitude2 = sqrt(y1 * y1 + y2 * y2);
    double angle = acos(dotProduct / (magnitude1 * magnitude2));
    return angle;
};
figure::figure(float _x1 /*= 0*/, float _x2 /*= 0*/, float _x3 /*= 0*/, float _x4 /*= 0*/, float _y1 /*= 0*/, float _y2 /*= 0*/, float _y3 /*= 0*/, float _y4 /*= 0*/) {
    x1 = _x1;
    x2 = _x2;
    x3 = _x3;
    x4 = _x4;
    y1 = _y1;
    y2 = _y2;
    y3 = _y3;
    y4 = _y4;
    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x4, y4);
    d = distance(x4, y4, x1, y1);
    d1 = distance(x1, y1, x3, y3);
    d2 = distance(x2, y2, x4, y4);
    P = a + b + c + d;
    S = d1 * d2 * 0.5 * sin(angleBetweenVectors(x3 - x1, x4 - x2, y3 - y1, y4 - y2));
};
void figure::show() {
    cout << "The square is: " << S << endl;
    cout << "The perimetr is: " << P << endl;
    cout << "If square is prug: " << is_prug() << endl;
    cout << "If square is square:" << is_square() << endl;
    cout << "If square is romb: " << is_romb() << endl;
    cout << "If square in a circle: " << is_in_circle() << endl;
    cout << "If square out a circle: " << is_out_circle() << endl;
    cout << endl;
};
bool figure::is_prug() {
    if ((a == c && b == d) && (b != c) && (d1 == d2)) {
        return true;
    };
    return false;
};
bool figure::is_square() {
    if ((a == c && b == d) && (b == c) && (d1 == d2)) {
        return true;
    };
    return false;
};
bool figure::is_romb() {
    float angle = sin(angleBetweenVectors(x3 - x1, x4 - x2, y3 - y1, y4 - y2));
    if ((a == c && b == d) && (b == c) && (d1 != d2) && (angle == 1)) {
        return true;
    }
    return false;
};
bool figure::is_in_circle() {
    float first_angle = sin(angleBetweenVectors(x2 - x1, x4 - x1, y2 - y1, y4 - y1));
    float second_angle = sin(angleBetweenVectors(x2 - x3, x4 - x3, y2 - y3, y4 - y3));
    if (first_angle + second_angle == 2) {
        return true;
    };
    return false;
};
bool figure::is_out_circle() {
    return (a + c) == (b + d);
};