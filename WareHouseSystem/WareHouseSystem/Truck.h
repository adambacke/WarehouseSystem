#pragma once



class Truck
{
private:
	int truckID;
	int maxCapacity;
	bool workingStatus;


public:
	Truck(int truckID, int maxCapacity);
	~Truck();

	bool getWorkingStatus();
	void setWorkingStatus();
};
