#include "WarehouseSpot.h"

WarehouseSpot::WarehouseSpot(int spotNr, int prodID, int SizePlaze)
{
	this->spotNr = spotNr;
	this->SizePlaze = SizePlaze;
	this->prodID = prodID;
}

WarehouseSpot::~WarehouseSpot()
{
	//Empty...
}

bool WarehouseSpot::enoughSpace(int qty)
{
	bool retVal = false;
	if (qty < SizePlaze)
		retVal = true;

	return retVal;
}

int WarehouseSpot::getProdID()
{
	return this->prodID;
}

int WarehouseSpot::getSpotNr()
{
	return this->spotNr;
}
