#include "bay.h"
#include <iostream>

using namespace std;

int main() {
	ocean ocean1;
	cout << "Input info about ocean (name, location, depth, area): " << endl;
	cin >> ocean1;
	cout << "Input info about sea (name incl ocean, name sea, depth, area, coat line): " << endl;
	sea sea1;
	cin >> sea1;
	bay bay1;
	cout << "Input info about bay (name incl ocean, name incl sea, name sea, lenght, heeght): " << endl;
	cin >> bay1;
	cout << ocean1;
	cout << sea1;
	cout << bay1;
	ocean no_ocean;
	sea no_sea;
	bay no_bay;
	cout << no_ocean << no_sea << no_bay;
};