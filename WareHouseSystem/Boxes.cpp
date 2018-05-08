#include "Boxes.h"

Boxes::Boxes()
{
	this->capacity = 5;
	this->counter = 0;
	this->boxes = new Box*[capacity];
}

Boxes::~Boxes()
{
	for (int i = 0; i < counter; i++)
	{
		delete boxes[i];
	}
	delete[] boxes;
}

void Boxes::addBox(double width, double height, double length, std::string name, int storageTemperature)
{
	if (counter == capacity)
		Expand();
	
	boxes[counter++] = new Box(width, height, length, name, storageTemperature);

}

Box Boxes::getBoxAtPlace(int place)
{
	return *boxes[place];
}

int Boxes::getNrOFBoxes()
{
	return this->counter;
}

void Boxes::Expand()
{
	this->capacity = capacity * 2;
	Box** temp = new Box*[capacity];

	for (int i = 0; i < counter; i++)
	{
		temp[i] = boxes[i];
	}
	delete[] boxes;
	boxes = temp;
}
