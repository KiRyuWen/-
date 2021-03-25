#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	double income, payable;
	while(cin>>income)
	{
		if (income < 750)
		{
			payable = income * 0.01;
		}
		else if(income <2250)
		{
			payable = (income - 750) * 0.02 + 7.50;
		}
		else if(income<3750)
		{
			payable = (income - 2250) * 0.03 + 37.50;
		}
		else if(income<5250)
		{
			payable = (income - 3750) * 0.04 + 82.50;
		}
		else if(income<7000)
		{
			payable = (income - 5250) * 0.05 + 142.50;
		}
		else
		{
			payable = (income - 7000) * 0.06 + 230.00;
		}
		cout << fixed<<setprecision(2)<<payable << endl;
	}
}