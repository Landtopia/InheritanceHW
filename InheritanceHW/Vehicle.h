#include <iostream>

using namespace std;

class Vehicle{

	string manufacturer;
	int year_built;

public:

	Vehicle();
	Vehicle(string manu, int yr);

	string getManu();
	int getYr();

	void setManu(string manu);

	void setYr(int yr);

	void displayInfo();
};

