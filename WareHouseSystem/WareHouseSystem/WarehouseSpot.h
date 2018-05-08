#pragma once


class WarehouseSpot
{
public:
	WarehouseSpot(int spotNr = -1,int prodID = -1, int SizePlaze = 0);
	~WarehouseSpot();

	bool enoughSpace(int qty);
	int getProdID();
	int getSpotNr();

private:
	int spotNr;
	int prodID;
	int SizePlaze;

};