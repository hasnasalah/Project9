/*
Name:		hasna ben jillali
Date        11/27/2022
Prog Name:	car Program*/

#include "car.h"

//Default constractor and initialase base default constractor
Car::Car() :Vehicle()
{
	num_doors = 0;
}

//Constractor initialase all mambers in this class and base class
Car::Car(string nm, int yr, int d) : Vehicle(nm, yr)
{
	num_doors = d;
}


Car::~Car()
{
}

//getter
int Car::getNumDoors()
{
	return num_doors;
}

//setter
void Car::setNumDoors(int d)
{
	num_doors =d;
}

//overload print func
void Car::print()
{
	Vehicle::print();
	cout << "doors:\t " << num_doors << endl << endl;
}
