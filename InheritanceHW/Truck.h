#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
	int tCap;

public:
	Truck();
	Truck(string manu, int yr, int tow);
	int getTow();
	void setTow(int tow);
	void displayInfo();
};

#endif