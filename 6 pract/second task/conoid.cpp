#include <iostream>
#include <cmath>
#include <windows.h>
#include "conoid.h"

using namespace std;

const double pi = 3.14159265;

Conoid::Conoid(double r1, double r2, double l) {
    x = y = z = 0.0;
    this->r1 = r1;
    this->r2 = r2;
    this->h = l;
};

Conoid::Conoid(double a, double b, double c, double r1t, double r2t, double h){
    x = a;
    y = b;
    z = c;
    r1 = r1t;
    r2 = r2t;
    this->h = h;
};

double Conoid::area() {
    double l = sqrt(h * h + (r1 - r2) * (r1 - r2));
    return pi * (r1 * r1 + (r1 + r2) * l + r2 * r2);
};

double Conoid::volume() {
    return (pi * h * (r1 * r1 + r1 * r2 + r2 * r2)) / 3;
};

void Conoid::setRadius2(double r2) { this->r2 = r2;};

double Conoid::getRadius2() {return r2;};

bool Conoid::checkMax(Conoid* conoid2){ 
    return this->volume() > conoid2->volume();
};

bool Conoid::Compare(Conoid* conoid2) {
    return this->volume() == conoid2->volume();
};

ostream &operator << (ostream &stream, Conoid obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r1 = " << obj.r1 << " ";
    stream << "r2 = " << obj.r2 << " ";
    stream << "h = " << obj.h << "\n";
    return stream;
};

istream &operator >> (istream &stream, Conoid& obj) {
    stream >> obj.x >> obj.y >> obj.z >> obj.r1 >> obj.r2 >> obj.h;
    return stream;
};

bool operator== (Conoid& c1, Conoid& c2) {
    return c1.volume() == c2.volume();
};

bool operator>= (Conoid& c1, Conoid& c2) {
    return c1.volume() >= c2.volume();
};