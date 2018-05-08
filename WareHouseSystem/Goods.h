#pragma once
#include "Boxes.h"

class Goods
{
private:
	int idNumber;
	int weight;
	int quantity;
	std::string productName;
	Box* boxSize;
	std::string storageCondition;

public:
	Goods(Boxes boxes,int idNumber = 0, int weight = 0, std::string productName = " ", int boxPlace = -1, std::string storageCondition = " ", int quantity = 0);
	~Goods();

	bool SetQty(int qty);
	int getQty();
	bool removeQty(int qty);
	
	void setName(std::string Name);
	bool setWeight(int weight);
	bool setBoxSize(int typeBox, Boxes boxes);

	int getidNumber() const;
};