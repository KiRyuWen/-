#include "StRec.h"

void StRec::Insert(string firstName, string lastName, string phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->phone = phone;
}

void StRec::Delete(string firstName, string lastName, string phone)
{
	//dothing it's a redudant
}

void StRec::Search(string firstName, string lastName, string phone)
{

}

void StRec::Print()
{
	cout << firstName <<" "<< lastName <<" "<< phone<<endl;
}

bool StRec::Verify(string firstName, string lastName, string phone)
{
	if (this->firstName == firstName && this->lastName == lastName && this->phone == phone)
		return true;
	return false;
}
