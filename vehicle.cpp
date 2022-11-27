/*
Name:		hasna ben jillali
Date:		11/27/2022
Prog Name:	vehicle  Program*/

#include "vehicle.h"

//default constractor
Vehicle::Vehicle()
{
	manufacturer = "";
	year = 0;
}

//constractor to inisialize members
Vehicle::Vehicle(string nm, int yr)
{
	manufacturer = nm;
	year = yr;
}

Vehicle::~Vehicle()
{
}

//getters
string Vehicle::getManufacturer()
{
	return manufacturer;
}
int Vehicle::getYear()
{
	return year;
}

//setters
void Vehicle::setYear(int yr)
{
	year = yr;
}
void Vehicle::setManufacturer(string nm)
{
	manufacturer = nm;
}

//print function
void Vehicle::print()
{
	cout << "Vehicle manufacturer:\t " << manufacturer<< endl;
	cout << "Year built:\t " << year << endl;
}

