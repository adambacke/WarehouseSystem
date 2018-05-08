#pragma once
#include "Box.h"

class Boxes
{
public:
	Boxes();
	~Boxes();

	void addBox(double width, double height, double length, std::string name, int storageTemperature);
	Box getBoxAtPlace(int place);
	int getNrOFBoxes();

private:
	int capacity;
	int counter;
	Box** boxes;
	void Expand();
};
