//Step 1 input string
//Step 2 �q�p���I�᭱�}�l����N
//Step 3 �M��N+�e���Ʀr���F��+�p���I����=M
//Step 4 !!����p�ƫ�b��r��C

#include <iostream>
#include <string>
using namespace std;
int FindPoint(const string input)
{
	for(int i=0;i<input.size();i++)
	{
		if (input[i] == '.')
			return i;
	}
	return -1;
}
void getNumBeforePoint(string& storeNumBeforePoint,string& input,int positionOfpoint,int N)
{
	int i = 0;
	if(positionOfpoint==-1)
	{
		for(i;i<input.size();i++)
			storeNumBeforePoint.push_back(input[i]);
	}
	else 
	{
		for (i; i < positionOfpoint; i++)
		{
			storeNumBeforePoint.push_back(input[i]);
		}
	}
	
	if (N > 0)
		storeNumBeforePoint.push_back('.');
}
int main()
{
	string input;
	string storeNumAfterPoint;
	string storeNumBeforePoint;
	string Output;
	int M, N;
	char C;
	while(cin>>input)
	{
		cin >> M >> N >> C;
		int positionOfpoint = FindPoint(input);
		getNumBeforePoint(storeNumBeforePoint, input, positionOfpoint,N);
		if(positionOfpoint>0)
		{
			for (int i = positionOfpoint + 1, j = 0; j < N; i++, j++)
			{
				char pushIn;
				if (i >= (input.size()))
					pushIn = '0';
				else
					pushIn = input[i];
				storeNumAfterPoint.push_back(pushIn);
			}
		}
		else
		{
			for(int i=0;i<N;i++)
			{
				storeNumAfterPoint.push_back('0');
			}
		}
		int num = M - (storeNumBeforePoint.size() + storeNumAfterPoint.size());

		if(num<=0)
		{
			Output = storeNumBeforePoint + storeNumAfterPoint;
		}
		else
		{
			for (int i = 0; i < num; i++)
				Output.push_back(C);
			Output += storeNumBeforePoint;
			Output += storeNumAfterPoint;
		}
		cout << Output<<endl;
		input.clear(), storeNumBeforePoint.clear(), storeNumAfterPoint.clear(), Output.clear();
	}
}