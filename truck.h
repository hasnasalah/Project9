/*
Name:		hasna ben jillali
Date:		11/27/2022
Prog Name:	truck class Program*/


#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


class Truck : public Vehicle
{
private:
	int towingCapacity;

public:
	Truck();
	Truck(string, int, int);

	~Truck();

	int getTowingCapacity();
	void setTowingCapacity(int);

	void print();
}; 
#pragma once
