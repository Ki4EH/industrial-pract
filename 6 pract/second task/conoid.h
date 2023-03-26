#include <iostream>
#include "cone.h"
class Conoid : public Cone {
    public:
        double r2;
        Conoid() {x = y = z = r1 = r2 = h = 0;};
        Conoid(double r1, double r2, double h);
        Conoid(double a, double b, double c, double r1t, double r2t, double h);
        double area();
        double volume();
        void setRadius2(double r2);
        double getRadius2();
        bool checkMax(Conoid *conoid2);
        bool Compare(Conoid *conoid2);
        friend std::ostream &operator<<(std::ostream &stream, Conoid obj);
        friend std::istream &operator>>(std::istream &stream, Conoid& obj);
        friend bool operator== (Conoid& c1, Conoid& c2);
        friend bool operator>= (Conoid& c1, Conoid& c2);
};