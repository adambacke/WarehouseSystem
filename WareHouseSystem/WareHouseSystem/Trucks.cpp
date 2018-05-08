#include "Trucks.h"

Trucks::Trucks()
{
	this->capacity = 10;
	this->counter = 0;
	trucks = new Truck*[capacity];
}

Trucks::~Trucks()
{
	for (int i = 0; i < counter; i++)
	{
		delete trucks[i];
	}
	delete[] trucks;
}