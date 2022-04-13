#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle{
	int doors;

public:

	Car();
	Car(string manu, int yr, int dr);
	int getDoors();

	void setDoors(int x);

	void displayInfo();
};

