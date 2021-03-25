#include <iostream>
using namespace std;

int main()
{
	unsigned long long int time;
	while(cin>>time)
	{
		cout << time / 3600 << " hours " << time / 60 % 60 << " minutes and " << time%3600%60 << " seconds"<<endl;
	}
}