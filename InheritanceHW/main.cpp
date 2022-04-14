/*
Name: Landan Allen
CIS1202.800
Date: 4/13/2022
*/

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	string manu;
	int yr;
	int drs;
	int tCap;

	cout << " ----Vehicle Program----" << endl << endl;

	cout << " Vehicle: " << endl;
	cout << " Enter the manufacturer: ";
	cin >> manu;

	cout << " Enter the year built: ";
	cin >> yr;

	Vehicle veh(manu, yr);

	veh.displayInfo();

	cout << endl << " Car: " << endl;
	cin.ignore();

	cout << " Enter the manufacturer: ";
	cin >> manu;

	cout << " Enter the year built: ";
	cin >> yr;

	cout << " Enter the number of doors: ";
	cin >> drs;

	Car car(manu, yr, drs);

	car.displayInfo();
	
	cout << endl << " Truck: " << endl;
	cin.ignore();

	cout << " Enter the manufacturer: ";
	cin >> manu;

	cout << " Enter the year built: ";
	cin >> yr;

	cout << " Enter the towing capacity: ";
	cin >> tCap;

	Truck tru(manu, yr, tCap);

	tru.displayInfo();

	return 0;
}