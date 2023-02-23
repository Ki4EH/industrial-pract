#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <ctime>
#include "circle.h"

using namespace std;

circle::circle(float r /*= 0*/, float x /*= 0*/, float y /*= 0*/) {
    radius = r;
    x_center = x;
    y_center = y;
};
double circle::set_circle (float r, float x, float y) {
    radius = r;
    x_center = x;
    y_center = y;
    return 0;
};
float circle::square() {
    return M_PI * pow(radius, 2);
};
double circle::square_tr(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
};
bool circle::triangle_around (float a, float b, float c) {
    return bool(((a * b * c) / (4 * square_tr(a, b, c))) == radius);
};
bool circle::triangle_in (float a, float b, float c) {
    return bool((square_tr(a, b, c) / ((a + b + c) / 2)) == radius);
};
bool circle::check_circle (float r, float x_cntr, float y_cntr) {
    return (sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2)) < (r + radius));
};
