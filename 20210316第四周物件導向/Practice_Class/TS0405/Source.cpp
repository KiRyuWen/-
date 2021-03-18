// Name: Ã¹¤åæf
// Date: March 18, 2021
// Last Update: March 18, 2021
// Problem statement: Collatz conjecture
#include <iostream>
using namespace std;

int OutputCollatz_conjecture(int N, int num_cycles)//Recursion of cycles counts
{
	num_cycles++;
	if (N == 1)                                      //base case
	{
		return num_cycles;
	}
	else                                          //the other case
	{
		if (N % 2 == 0)                                //even number
		{
			OutputCollatz_conjecture(N / 2, num_cycles);
		}
		else                                      //odd number
		{
			OutputCollatz_conjecture(N * 3 + 1, num_cycles);
		}

	}
}
int main()
{
	int N1, N2;

	while (cin >> N1 >> N2)  //Easy Input until EOF
	{
		bool flag = false;//to memorize the if N1>N2
		if (N1 > N2)         //if N1>N2 set flag and swap two number
		{
			swap(N1, N2);
			flag = true;
		}
		int max = OutputCollatz_conjecture(N1, 0); //Let the maxCycles be N1 First
		for (int i = N1 + 1; i <= N2; i++) // To calculate the cycles from N1+1 to N2
		{
			int tmp = OutputCollatz_conjecture(i, 0);
			if (max < tmp)           //Update Max
			{
				max = tmp;
			}
		}
		if (flag)                // if flag ==true swap back again
			swap(N1, N2);
		cout << N1 << " " << N2 << " " << max << endl;//output
	}
}