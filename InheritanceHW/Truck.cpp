#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle() {
	tow = 0;
}

Truck::Truck(string manu, int yr, int tow) : Vehicle(manu, yr) {
	tow = tow;
}

int Truck::getTow() {
	return tow;
}

void Truck::setTow(int x) {
	tow = x;
}
//Display the towing capacity just for truck. The rest of the display is in the Vehicle.h
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << " Towing Cap: " << getTow() << endl;
}
