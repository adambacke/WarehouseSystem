#include "WorkActivities.h"

void WorkActivities::Expand()
{
	this->capacity = capacity * 2;
	WorkActivity** temp = new WorkActivity*[capacity];

	for (int i = 0; i < counter; i++)
	{
		temp[i] = WorkingActivities[i];
	}
	delete[] WorkingActivities;
	WorkingActivities = temp;
}

WorkActivities::WorkActivities()
{
	counter = 0;
	capacity = 10;
	WorkingActivities = new WorkActivity*[capacity];

}

WorkActivities::~WorkActivities()
{
	for (int i = 0; i < counter; i++)
	{
		delete WorkingActivities[i];
	}
	delete[] WorkingActivities;

}



void WorkActivities::addWorkingActivities(int prodID, int spot, int qty, int orderNr, int ID)
{
	if (counter == capacity)
		Expand();

	WorkingActivities[counter++] = new WorkActivity(prodID, spot, orderNr, qty, ID);
}




void WorkActivities::removeActivity(int ID)
{
	for (int i = 0; i < counter; i++)
	{
		if (WorkingActivities[i]->getID() == ID)
		{
			for (int j = i; j < counter -1; j++)
			{
				std::swap(WorkingActivities[j], WorkingActivities[j + 1]);
				
			}

			i = counter;
			counter--;
			
			

		}
	}

}


std::string WorkActivities::toStringAll()
{
	std::string retString;
	for (int i = 0; i < counter; i++)
	{
		retString += WorkingActivities[i]->toString() + "\n";
	}
	return retString;
}