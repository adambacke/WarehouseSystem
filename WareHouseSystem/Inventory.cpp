#include "Inventory.h"

bool Inventory::expand()
{
	bool retVal = false;
	if ((capaciy * 2) < maxCapacity)
	{
		this->capaciy = this->capaciy * 2;
		retVal = true;
		Goods **temp = new Goods*[capaciy];

		for (int i = 0; i < nrOfStoredItems; i++)
		{
			temp[i] = goods[i];
		}
		delete[] goods;
		goods = temp;
	}
	return retVal;
}

Inventory::Inventory()
{
	this->capaciy = 1; //Change later... low for testing purpose
	this->nrOfStoredItems = 0;
	goods = new Goods*[capaciy];
}

Inventory::~Inventory()
{
	for (int i = 0; i < nrOfStoredItems; i++)
	{
		delete goods[i];
	}
	delete[] goods;
}

bool Inventory::checkQuantity(int ID, int Qty)
{
	bool retVal = false;

	//GÖR NÄR WAREHOUSE FINNS
	return false;
}

bool Inventory::reduceQty(int ID, int Qty)
{
	bool retVal = false;
	for (int i = 0; i < nrOfStoredItems; i++)
	{
		if (goods[i]->getidNumber() == ID)
		{
			retVal = goods[i]->removeQty(Qty);
			i = nrOfStoredItems;
		}
	}
	return retVal;
}

void Inventory::addNewGoods(int ID, int weight, std::string productName, std::string storageCondition, int quantity, int boxType, Boxes boxes)
{
	bool enoughSpace = true;
	if (nrOfStoredItems == capaciy)
		enoughSpace = expand();

	if (enoughSpace)
	{
		Goods toAdd(boxes, ID, weight, productName, boxType, storageCondition, quantity);
		goods[nrOfStoredItems++] = new Goods(toAdd);
	}

}

bool Inventory::EditProduct(int ID, Boxes boxes)
{
	int userChoise = -1;
	while (userChoise != 0)
	{
		std::cout << "What would you like to change?" << std::endl;
		std::cout << "1. Change product name" << std::endl;
		std::cout << "2. Change product weight" << std::endl;
		std::cout << "3. Change product box type" << std::endl;
		std::cout << "4. Change storage condition" << std::endl;
		std::cout << "0. End edit session" << std::endl;
		std::cin >> userChoise;
		std::cin.ignore();
		std::string newName = " ";
		std::string newStorageCondition = " ";

		switch (userChoise)
		{
		case 1:
			std::cout << "Write new name: ";
			std::getline(std::cin, newName);
			for (int i = 0; i < nrOfStoredItems; i++)
			{
				if (goods[i]->getidNumber() == ID)
				{
					goods[i]->setName(newName);
					i = nrOfStoredItems;
				}
			}
			break;

		case 2:
			int newWeight;
			std::cout << "Write new weight: ";
			std::cin >> newWeight;
			std::cin.ignore();
			for (int i = 0; i < nrOfStoredItems; i++)
			{
				if (goods[i]->getidNumber() == ID)
				{
					goods[i]->setWeight(newWeight);
					i = nrOfStoredItems;
				}
			}
			break;

		case 3:
			int newBoxType;
			std::cout << "Write new box type ID: ";
			std::cin >> newBoxType;
			std::cin.ignore();
			for (int i = 0; i < nrOfStoredItems; i++)
			{
				if (goods[i]->getidNumber() == ID)
				{
					goods[i]->setBoxSize(newBoxType, boxes);
					i = nrOfStoredItems;
				}
			}
			break;

		case 4:
			std::cout << "Write new box type ID: ";
			std::cin >> newBoxType;
			std::cin.ignore();
			for (int i = 0; i < nrOfStoredItems; i++)
			{
				if (goods[i]->getidNumber() == ID)
				{
					goods[i]->setBoxSize(newBoxType, boxes);
					i = nrOfStoredItems;
				}
			}
			break;
		

		default:
			break;
		}
	}
	
	return false;
}
