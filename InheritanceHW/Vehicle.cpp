#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){
	manufacturer = "";
	year = 0;
}

Vehicle::Vehicle(string manu, int yr){
	manufacturer = manu;
	year = yr;
}

string Vehicle::getManu(){
	return manufacturer;
}

int Vehicle::getYr(){
	return year;
}

void Vehicle::setManu(string manu){
	manufacturer = manu;
}

void Vehicle::setYr(int yr){
	year = yr;
}

void Vehicle::displayInfo(){
	
	cout << " ---Vehicle Details---" << endl;
	cout << " Manufacturer: " << getManu() << endl;
	cout << " Year Built: " << getYr() << endl;
}
