// Name: Ã¹¤åæf
// Date: March 18, 2021
// Last Update: March 18, 2021
// Problem statement: Output GCD
#include <iostream>
using namespace std;

void GCD(int r, int Maxdivison) //Find gcd by recursion
{
	if(r==0)   //base case
	{
		cout << Maxdivison << endl;
	}
	else       //The other case
	{
		GCD(Maxdivison % r, r);
	}
}
int main()
{
	int a, b;
	while(cin>>a>>b) //simple Input for no EOF
	{
		GCD(a % b, b);//calling function and cout
	}
}