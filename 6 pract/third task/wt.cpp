#include "bay.h"
#include <iostream>

using namespace std;

ocean::ocean() {
	name = location = "None";
	depth = area = 0;
}

ocean::ocean(string oc) {
	name = oc;
	location = "None ocean";
	depth = area = 0;
}

ocean::ocean(string n, string l, int d, int s) {
	name = n;
	location = l;
	depth = d;
	area = s;
}

ostream& operator<< (ostream& stream, ocean o) {
	stream << "Ocean: " << o.name << "\nLocation: " << o.location << "\nDepth " << o.depth << "\nArea " << o.area << endl << endl;
	return stream;
}

istream& operator>> (istream& stream, ocean& o) {
	stream >> o.name >> o.location >> o.depth >> o.area;
	return stream;
}

sea::sea() : ocean() {
	sea_name = "None sea";
	sea_depth = sea_area = coast_line = 0;
}

sea::sea(string n, string sn) : ocean(n) {
	sea_name = sn;
	sea_depth = sea_area = coast_line = 0;
}

sea::sea(string oc, string n, int d, int s, int l) : ocean(oc) {
	sea_name = n;
	sea_depth = d;
	sea_area = s;
	coast_line = l;
}

istream& operator>> (istream& stream, sea& s) {
	stream >> s.name >> s.sea_name >> s.sea_depth >> s.sea_area >> s.coast_line;
	return stream;
}

ostream& operator<< (ostream& stream, sea s) {
	stream << "Ocean: " << s.name << "\nSea: " << s.sea_name << "\nDepth: " << s.sea_depth << "\nArea: " << s.sea_area << "\nCoastline: " << s.coast_line << endl << endl;
	return stream;
}

bay::bay() : sea() {
	bay_name = "Empty bay";
	length = height = 0;
}

bay::bay(string n, string sn, string bn, int l, int h) : sea(n, sn) {
	bay_name = bn;
	length = l;
	height = h;
}

istream& operator>> (istream& stream, bay& s) {
	stream >> s.name >> s.sea_name >> s.bay_name >> s.length >> s.height;
	return stream;
}

ostream& operator<< (ostream& stream, bay s) {
	stream << "Ocean: " << s.name << "\nSea: " << s.sea_name << "\nBay: " << s.bay_name << "\nLength: " << s.length << "\nHeight: " << s.height << endl << endl;
	return stream;
}