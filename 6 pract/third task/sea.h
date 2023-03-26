#include <iostream>
#include "ocean.h"
#pragma once

using namespace std;

class sea : public ocean {
    public:
        string sea_name;
	    int sea_depth, sea_area, coast_line;
	    sea();
	    sea(string n, string sn);
	    sea(string oc, string n, int d, int s, int l);
	    friend ostream& operator<< (ostream& stream, sea o);
	    friend istream& operator>> (istream& stream, sea& o);
};