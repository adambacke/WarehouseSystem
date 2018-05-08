#pragma once
#include "WorkActivity.h"

class WorkActivities
{
private:

	WorkActivity * * WorkingActivities;
	int capacity;
	int counter;
	void Expand();
	//test

public:

	WorkActivities();
	~WorkActivities();

	void addWorkingActivities(int prodID, int spot, int qty, int orderNr, int ID);
	
	void removeActivity(int ID);

	std::string toStringAll();



};
