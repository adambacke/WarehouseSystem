#pragma once
#include "Truck.h"
#include "WorkActivities.h"



class Trucks
{
private:
	Truck * * trucks;
	int capacity;
	int counter;


public:
	Trucks();
	~Trucks();

	bool Work()
};