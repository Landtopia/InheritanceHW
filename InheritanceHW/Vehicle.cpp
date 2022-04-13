#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){

	manufacturer = "";
	year_built = 0;
}

Vehicle::Vehicle(string manu, int yr){

	manufacturer = manu;
	year_built = yr;
}

string Vehicle::getManu(){

	return manufacturer;
}

int Vehicle::getYr(){
	
	return year_built;
}

void Vehicle::setManu(string manu){

	manufacturer = manu;
}

void Vehicle::setYr(int yr){

	year_built = yr;
}

void Vehicle::displayInfo(){
	
	cout << " ---Vehicle Details---" << endl;
	cout << " Manufacturer: " << getManu() << endl;
	cout << " Year Built: " << getYr() << endl;
}
