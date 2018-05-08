#pragma once
#include "WareHouse.h"

class Warehouses
{
private:
	int counter; 
	int capacity;
	WareHouse** warehouses;
	
	void expand();

public:
	Warehouses();
	~Warehouses();
	int findWareHouse(int ID);
	void addWarehouse(std::string location, int ID);
	bool removeWarehouse(int ID);

};