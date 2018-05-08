#include "WorkActivity.h"

WorkActivity::WorkActivity(int prodID, int spot, int orderNr, int qty, int ID)
{

	this->prodID = prodID;
	this->spot = spot;
	this->orderNr = orderNr;
	this->qty = qty;
	this->ID = ID;


}



WorkActivity::~WorkActivity()
{


}

std::string WorkActivity::toString()
{
	std::string retString;

	retString += "Product ID: " + std::to_string(prodID) + "\n";
	retString += "Spot: " + std::to_string(spot) + "\n";
	retString += "Order Number: " + std::to_string(orderNr) + "\n";
	retString += "Qty: " + std::to_string(qty) + "\n";

	return retString;

}

int WorkActivity::getID() const
{
	return ID;
}
