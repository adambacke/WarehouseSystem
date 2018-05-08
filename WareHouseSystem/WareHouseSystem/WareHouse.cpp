#include "WareHouse.h"

WareHouse::WareHouse(std::string location, int ID)
{
	this->location = location;
	this->ID = ID;
	this->capacity = 100;
	this->counter = 0;
	this->wareHouseSpot = new WarehouseSpot*[capacity];
}

WareHouse::~WareHouse()
{
	for (int i = 0; i < counter; i++)
	{
		delete wareHouseSpot[i];
	}
	delete[] wareHouseSpot; 
}

int WareHouse::getSpot(int prodID)
{
	int spot = -1;
	for (int i = 0; i < counter; i++)
	{
		if (prodID == wareHouseSpot[i]->getProdID())
		{
			spot = wareHouseSpot[i]->getSpotNr();
		}
	}
	return spot;
}

bool WareHouse::EnoughSpace(int qty, int prodID)
{
	bool retVal = false;
	for (int i = 0; i < counter; i++)
	{
		if (prodID == wareHouseSpot[i]->getProdID())
		{
			retVal = wareHouseSpot[i]->enoughSpace(qty);
		}
	}
	return retVal;
}

bool WareHouse::addWHSpot(int spotNr, int prodID, int SizePlace)
{
	bool retVal = false;

	if (counter < capacity)
	{
		WarehouseSpot toAdd(spotNr, prodID, SizePlace);
		wareHouseSpot[counter++] = new WarehouseSpot(toAdd);
		retVal = true;
	}
	return retVal;
}

bool WareHouse::removeWHSpot(int spotNr)
{
	bool retVal = false;
	for (int i = 0; i < counter; i++)
	{
		if (spotNr == wareHouseSpot[i]->getSpotNr())
		{
			std::swap(wareHouseSpot[--counter], wareHouseSpot[i]);
			delete wareHouseSpot[counter];
			retVal = true;
			i = counter;
		}
	}
	return retVal;
}

int WareHouse::getWHID()
{
	return this->ID;
}
