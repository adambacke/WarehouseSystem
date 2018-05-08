#pragma once
#include <string>


class WorkActivity
{
private:
	int prodID;
	int spot;
	int orderNr;
	int qty;
	int ID;

public:
	WorkActivity(int prodID, int spot, int orderNr, int qty, int ID);
	~WorkActivity();

	std::string toString();
	int getID() const;
	
};
