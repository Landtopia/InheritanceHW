#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle{
	int doors;

public:

	Car();
	Car(string manu, int yr, int drs);
	int getDoors();

	void setDoors(int x);

	void displayInfo();
};

#endif
