// Name: Ã¹¤åæf
// Date: March 23, 2021
// Last Update: March 23, 2021
// Problem statement: This C++ program is to manage the HotDogStand
#pragma once
#include <iostream>
#include <cstring>

using namespace std;
class HotDogStand
{
public:
	HotDogStand();//default constructor with volume to 0
	HotDogStand(const char *id);//Construct a HotDogStand with the given ID and set the sales volume to 0.
	HotDogStand(const char *id, int amount);//Construct a HotDogStand with the given ID and sales volume.
	~HotDogStand();
	void justSold();//Increase the hot dog sales volume by 1.
	void print();//Print the ID and sales volume of the store separated by spaces.
	int thisStandSoldAmount();//Return the sales volume of the store.
	static int allStandSoldAmount();//Return the total sales volume of all stores.
private:
	char *standId;
	int hotDogSellAmount;
	static int totalSellAmount;
};

