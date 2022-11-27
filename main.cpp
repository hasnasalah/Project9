/*
Name:		hasna ben jillali
Date:		11/27/2022
Prog Name:	vehicle class Program*/

#include <string>
#include <iostream>
#include <iomanip>
#include "vehicle.h"
#include "car.h"
#include "truck.h"


using namespace std;

int main()
{
	string manufacturer = "";
	int year = 0, num = 0;
	cout << "Vehicle:\n\n";

	//initialize and print vehicle
	cout << "Please enter the manufacturer name: ";
	cin >> manufacturer;
	cout << "Please enter year built: ";
	cin >> year;
	cout << "\nVehicle Information:\n\n\n";
	Vehicle vehicle(manufacturer, year);
	vehicle.print();

	//initialize and print Car Class
	cout << "\n\nPlease enter the car name: ";
	cin >> manufacturer;
	cout << "Please enter year built: ";
	cin >> year;
	cout << "Please enter max passanger number: ";
	cin >> num;
	cout << "\n\nCruise ship Information:\n\n";
	Car car(manufacturer, year, num);
	car.print();

	//initialize and print truck class
	cout << "Please enter the truck name: ";
	cin >>manufacturer;
	cout << "Please enter year built: ";
	cin >> year;
	cout << "Please enter cargo capacity : ";
	cin >> num;
	cout << "\n\nCruise ship Information:\n\n";
	Truck truck(manufacturer, year, num);
	truck.print();

	return 0;
}

