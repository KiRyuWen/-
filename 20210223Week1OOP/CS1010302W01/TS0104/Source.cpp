//To display number
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	char Number[100] = "";
	while(cin>>Number)
	{
			//display number by 10 digits
			cout << setw(10) << Number << endl;
	}
}