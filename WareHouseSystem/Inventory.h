#pragma once
#include "Goods.h"
#include <iostream>


class Inventory
{
private:
	Goods** goods;
	int nrOfStoredItems;
	int capaciy;
	static const int maxCapacity = 10;
	bool expand();

public:
	Inventory();
	~Inventory();


	bool checkQuantity(int ID, int Qty);
	bool reduceQty(int ID, int Qty);
	void addNewGoods(int ID, int weight, std::string productName, std::string storageCondition, int quantity, int boxType, Boxes boxes);
	bool EditProduct(int ID);

};