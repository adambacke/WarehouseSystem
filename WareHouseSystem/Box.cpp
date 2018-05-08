#include "Box.h"

Box::Box(double width, double height, double length, std::string name, int storageTemperature)
{
	this->width = width;
	this->height = height;
	this->lenght = lenght;
	this->name = name;
	this->storageTemperature = storageTemperature;
}

Box::~Box()
{
	//Empty
}

std::string Box::toString() const
{
	//Gör den sen....

	return std::string();
}
