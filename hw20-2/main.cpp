#include <iostream>
#include "Airplane.h"

int main() {

	Airplane airplane(1709, "Krakow Airport (KRK)", "Dublin Airport (DUB)", "Ryanair Plane", 160);

	airplane.addPassenger("Yaroslav");
	airplane.addPassenger("Danylo");
	airplane.addPassenger("Mykola");

	airplane.printAirplaneInfo();

	airplane.removePassenger("Danylo");

	airplane.printAirplaneInfo();

	return 0;
}
