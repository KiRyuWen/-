#include <iostream>
#include <cmath>
using namespace std;
//t=log10(2)
int main()
{
	
	int year = 1900;
	int Inputyear;
	double k = 4;
	while(cin>>Inputyear)
	{
		double num = k * pow(2, (Inputyear - year)/10);
		double bit= num*log10(2);
		
		int N = 1;
		double NSUM=log10(N);
		while(bit>NSUM)
		{
			N++;
		    NSUM +=log10(N);
		}
		cout << N - 1<<endl;
	}
}