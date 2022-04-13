#include <iostream>

using namespace std;

class Vehicle{

	string manufacturer;
	int year;

public:

	Vehicle();
	Vehicle(string manu, int yr);

	string getManu();
	int getYr();

	void setManu(string manu);

	void setYr(int yr);

	void displayInfo();
};

