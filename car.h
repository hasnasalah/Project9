/*
Name:		hasna ben jillali
Date:	11/27/2022
Prog Name:	Car class Program*/

#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include "vehicle.h"

using namespace std;


class Car: public Vehicle
{
private:
	int num_doors;

public:
	Car();
	Car(string, int, int);

	~Car();

	int getNumDoors();
	void setNumDoors(int);

	void print();
};
#pragma once
