#include "Goods.h"

Goods::Goods(Boxes boxes, int idNumber, int weight, std::string productName, int boxPlace, std::string storageCondition, int quantity)
{
	this->idNumber = idNumber;
	this->weight = weight;
	this->productName = productName;
	this->boxSize = new Box(boxes.getBoxAtPlace(boxPlace));
	this->quantity = quantity;
}

Goods::~Goods()
{
	delete boxSize;
}


bool Goods::SetQty(int qty)
{
	bool retVal = false;
	if (qty > 0)
	{
		this->quantity = this->quantity + qty;
		retVal = true;
	}
	return retVal;
}

int Goods::getQty()
{
	return this->quantity;
}

bool Goods::removeQty(int qty)
{
	bool retVal = false;
	if (qty > 0 && qty < this->quantity)
	{
		this->quantity = this->quantity - qty;
		retVal = true;
	}
	return retVal;
}

void Goods::setName(std::string Name)
{
	this->productName = Name;
}

bool Goods::setWeight(int weight)
{
	bool retVal = false;
	if (weight > 0)
	{
		this->weight = weight;
		retVal = true;
	}
	return retVal;
}

bool Goods::setBoxSize(int typeBox, Boxes boxes)
{
	bool retVal = false;
	if (typeBox < boxes.getNrOFBoxes() && typeBox > 0)
	{
		this->boxSize = new Box(boxes.getBoxAtPlace(typeBox));
		retVal = true;
	}
	
	return retVal;
}

int Goods::getidNumber() const
{
	return this->idNumber;
}
