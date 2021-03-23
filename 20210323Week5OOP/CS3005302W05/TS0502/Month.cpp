#include "Month.h"
const char* MonthName[] = { "Jan",	"Feb",	"Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };//definition of Month name to output the string
Month::Month()//default of month set month to 1
{
	this->month = 1;
}

Month::Month(char first, char second, char third)//constructor with input char
{
	this->month = 1;
	for(int i=0;i<12;i++)//check input char wheather can match MonthName or not
	{
		if (MonthName[i][0] == first && MonthName[i][1] == second && MonthName[i][2] == third)
		{
			this->month = i+1;
			break;
		}
	}
	
}

Month::Month(int monthInt) //constructor with int
{
	if (monthInt > 12 || monthInt < 1)
		monthInt = 1;
	this->month = monthInt;
}


Month::~Month()//destructor
{
}

void Month::inputInt()//input monthInt 
{
	int monthInt;
	std::cin >> monthInt;
	if (monthInt > 12 || monthInt < 1)
		monthInt = 1;
	month = monthInt;
}

void Month::inputStr()//input with string type 
{
	char first, second, third;
	std::cin >> first >> second >> third;
	this->month = 1;
	for (int i = 0; i < 12; i++)
	{
		if (MonthName[i][0] == first && MonthName[i][1] == second && MonthName[i][2] == third)
		{
			this->month = i + 1;
			break;
		}
	}
	
}


void Month::outputInt()//output the month
{
	std::cout << this->month;
}

void Month::outputStr()//output the month with string type
{
	std::cout << MonthName[month - 1] ;
}

Month Month::nextMonth()//increment the month and assign the value to a new obj
{
	int next = month + 1;
	return Month(next);
}
