
#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car() : Vehicle(){
	doors = 0;
}

Car::Car(string manu, int yr, int drs) : Vehicle(manu, yr){
	doors = drs;
}

int Car::getDoors(){
	return doors;
}

void Car::setDoors(int drs){
	doors = drs;
}
//Display info for the doors. The rest of the display is in the Vehicle.h
void Car::displayInfo(){

	Vehicle::displayInfo();
	cout << "Doors: " << getDoors() << endl;
}