#include "Warehouses.h"

Warehouses::Warehouses()
{
	this->capacity = 2;
	this->counter = 0;
	warehouses = new WareHouse*[capacity];
}

Warehouses::~Warehouses()
{
	for (int i = 0; i < counter; i++)
	{
		delete warehouses[i];
	}
	delete[] warehouses;
}

int Warehouses::findWareHouse(int ID)
{
	int returnval = -1;
	for (int i = 0; i < counter; i++)
	{
		if (ID == warehouses[i]->getWHID())
		{
			returnval = i;
		}
	}
	return returnval;
}

void Warehouses::addWarehouse(std::string location, int ID)
{
	if (counter == capacity)
		expand();

	WareHouse toAdd(location, ID);
	warehouses[counter++] = new WareHouse(toAdd);
}

bool Warehouses::removeWarehouse(int ID)
{
	bool retVal = false;
	
	for (int i = 0; i < counter; i++)
	{
		if (warehouses[i]->getWHID() == ID)
		{
			std::swap(warehouses[--counter], warehouses[i]);
			delete warehouses[counter];
			retVal = true;
			i = counter;
		}
	}


	return retVal;
}
