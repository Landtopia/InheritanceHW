#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle() {
	tCap = 0;
}
//I can not figure out why this is saying it is unitialized. I thought it was just overloaded but the error changed after I debugged it again.
Truck::Truck(string manu, int yr, int tow) : Vehicle(manu, yr) {
	tCap = tow;
}

int Truck::getTow() {
	return tCap;
}

void Truck::setTow(int x) {
	tCap = x;
}
//Display the towing capacity just for truck. The rest of the display is in the Vehicle.h
void Truck::displayInfo() {
	Vehicle::displayInfo();

	cout << " Towing Cap: " << getTow() << endl;
}
