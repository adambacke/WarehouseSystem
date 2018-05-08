#include "Truck.h"


Truck::Truck(int truckID, int maxCapacity)
{
	this->truckID = truckID;
	this->maxCapacity = maxCapacity;
	this->workingStatus = false;

}

Truck::~Truck()
{

}

bool Truck::getWorkingStatus()
{
	return workingStatus;
}

void Truck::setWorkingStatus()
{
	if (workingStatus == true)
		workingStatus = false;
	else
		workingStatus = true;
}