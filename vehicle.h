/*
Name:		MOHAMED HAMMADI
Date:		06/12/2018 - Unit 8 – Ship calass Program
Prog Name:	Ship calass Program*/


#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;
public:

	Vehicle();
	Vehicle(string, int);

	~Vehicle();

	string getManufacturer();
	void setManufacturer(string);
	int getYear();
	void setYear(int);

	virtual void print();
};

#pragma once
