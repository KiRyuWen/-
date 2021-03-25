#pragma once
#include <iostream>
#include <string>
using namespace std;
class StRec
{
private:
	std::string firstName;
	std::string lastName;
	std::string phone;
public:
	void Insert(string firstName, string lastName, string phone);
	void Delete(string firstName, string lastName, string phone);
	void Search(string firstName, string lastName, string phone);
	void Print();
	bool Verify(string firstName, string lastName, string phone);
};