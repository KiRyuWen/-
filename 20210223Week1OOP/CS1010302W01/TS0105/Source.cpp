#include <iostream>
#include <iomanip>
const double PI = 3.14159265358979323846;
using namespace std;
inline void SphereVol(double r)
{
	//calculate Volume by formula
	cout << fixed << setprecision(6) << PI * 4 * r * r * r / 3 << endl;
}
int main()
{
	double Radius;
	while (cin >> Radius)
	{
		//do until EOF
		SphereVol(Radius);
	}
}