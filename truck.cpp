
#include "truck.h"

//Default constractor and initialase base default constractor
Truck::Truck() :Vehicle()
{
	towingCapacity = 0;
}

//Constractor initialase all mambers in this class and base class
Truck::Truck(string nm, int yr, int capacity) : Vehicle(nm, yr)
{
	towingCapacity = capacity;
}


Truck::~Truck()
{
}

//getter
int Truck::getTowingCapacity()
{
	return towingCapacity;
}

//setter
void Truck::setTowingCapacity(int capacity)
{
	towingCapacity = capacity;
}

//overload print func
void Truck::print()
{
	Vehicle::print();
	cout << "truck towing capacity:\t " << towingCapacity << endl << endl;
}
