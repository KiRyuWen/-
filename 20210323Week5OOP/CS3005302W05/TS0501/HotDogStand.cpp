#include "HotDogStand.h"


HotDogStand::HotDogStand()//default constructor
{
	this->standId = nullptr;
	this->hotDogSellAmount = 0;
}

HotDogStand::HotDogStand(const char* id)//Construct a HotDogStand with the given ID and set the sales volume to 0.
{
	this->standId = new char[strlen(id)+1];
	strcpy_s(standId, strlen(id) + 1, id);
	this->hotDogSellAmount = 0;
}

HotDogStand::HotDogStand(const char* id, int amount)//Construct a HotDogStand with the given ID and sales volume.
{
	this->standId = new char[strlen(id) + 1];
	strcpy_s(standId, strlen(id) + 1, id);
	this->hotDogSellAmount = amount;
	totalSellAmount += amount;
}


HotDogStand::~HotDogStand()//destructor to free the memory
{
	free(standId);
}

void HotDogStand::justSold()//Increase the hot dog sales volume by 1.
{
	hotDogSellAmount++;
	totalSellAmount++;
}

void HotDogStand::print()//Print the ID and sales volume of the store separated by spaces.
{
	for (int i = 0; standId[i] != '\0'; i++)
	{
		cout << standId[i];
	}
	cout << " " << hotDogSellAmount << endl;
}

int HotDogStand::thisStandSoldAmount()//Return the sales volume of the store.
{
	return hotDogSellAmount;
}

int HotDogStand::totalSellAmount = 0;//initialization the static totalSellAmount
int HotDogStand::allStandSoldAmount()//Return the total sales volume of all stores.
{
	return totalSellAmount;
}
