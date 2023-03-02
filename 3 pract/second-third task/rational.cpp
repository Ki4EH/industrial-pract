#include <iostream>
#include "rational.h"

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    a %= b;
    return gcd(b, a);
};

rational::rational(){
    a = 1;
    b = 1;
};

rational::rational(int a1 /*= 1*/, int b1 /*= 1*/){
    if (b1 == 0) throw exception();
    int d = gcd(a1, b1);
    a = a1 / d;
    b = b1 / d;
};

void rational::set(int a1 /*= 1*/, int b1 /*= 1*/){
    if (b1 == 0) throw exception();
    int d = gcd(a1, b1);
    a = a1 / d;
    b = b1 / d;
};

void rational::show(){
    cout << a << "/" << b << endl;
};

rational operator-(const rational &f, const rational &s) {
    return rational((f.a * s.b - s.a * f.b), f.b * s.b);
};

void rational::operator++(){
    this->set(this->a + 1, this->b);
};

bool rational::operator==(const rational &other){
    if (this->a == other.a && this->b == other.b) return true;
    return false;
};

bool rational::operator>(const rational &other){
    if ((this->a * other.b) > (other.a * this->b)) return true;
    return false;
};

void rational::operator=(const rational &other){
    this->a = other.a;
    this->b = other.b;
};