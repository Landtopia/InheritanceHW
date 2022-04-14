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
	int x;
	int tow;

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
	cin >> x;

	Car car(manu, yr, x);

	car.displayInfo();
	
	cout << endl << " Truck: " << endl;
	cin.ignore();

	cout << " Enter the manufacturer: ";
	cin >> manu;

	cout << " Enter the year built: ";
	cin >> yr;

	cout << " Enter the towing capacity: ";
	cin >> tow;

	Truck tru(manu, yr, tow);

	tru.displayInfo();

	return 0;
}