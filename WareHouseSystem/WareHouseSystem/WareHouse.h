#pragma once
#include "WarehouseSpot.h"
#include <string>


class WareHouse
{
public:
	WareHouse(std::string location, int ID);
	~WareHouse();

	int getSpot(int prodID);
	bool EnoughSpace(int qty, int prodID);
	bool addWHSpot(int spotNr, int prodID, int SizePlace);
	bool removeWHSpot(int spotNr);
	int getWHID();

private:
	WarehouseSpot** wareHouseSpot;
	int capacity;
	int counter;
	std::string location;
	int ID;

};