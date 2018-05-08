#pragma once
#include <string>


class Box
{
private:
	double width;
	double height;
	double lenght;
	std::string name;
	int storageTemperature;

public:
	Box(double width = 0.0, double height = 0.0, double length = 0.0, std::string name = " ", int storageTemperature = 0);
	~Box();

	std::string toString() const;
};