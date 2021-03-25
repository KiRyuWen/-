#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	
	int numbersInput;
	double Input;
	vector<double> storeInput;
	while(cin>>numbersInput)
	{
		double sumForAverage = 0.0, sumForStd = 0.0;
		double average = 0.0, std_deviation = 0.0;//初始化
		for(int i=0;i<numbersInput;i++)//算把每一個元素加起來
		{
			cin >> Input;
			sumForAverage += Input;
			storeInput.push_back(Input);
		}
		average = sumForAverage/numbersInput;//算出平均
		for(int i=0;i<numbersInput;i++)//算把每一個元素與平均的差值平方總和
		{
			sumForStd += pow(storeInput[i] - average, 2);
		}
		std_deviation = sqrt(sumForStd / numbersInput);//算出標準差
		cout << "Average:" << average << "	Standard deviation:" << std_deviation<<endl;
		storeInput.clear();//清空vector中的元素初始化
		
	}
}