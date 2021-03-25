#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double root, num, guess;
	//do until -1
	while (cin >> num)
	{
		//calculate root by formula
		guess = num / 2;
		root = num / guess;
		while (guess - ((guess + root) / 2) > 0.01)
		{
			//�p��t�ȬO�_�٬O�j��0.01
			guess = (guess + root) / 2;
			root = num / guess;
		}
		cout << fixed << setprecision(2) << root << endl;
	}
}