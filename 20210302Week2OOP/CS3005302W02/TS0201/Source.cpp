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
		double average = 0.0, std_deviation = 0.0;//��l��
		for(int i=0;i<numbersInput;i++)//���C�@�Ӥ����[�_��
		{
			cin >> Input;
			sumForAverage += Input;
			storeInput.push_back(Input);
		}
		average = sumForAverage/numbersInput;//��X����
		for(int i=0;i<numbersInput;i++)//���C�@�Ӥ����P�������t�ȥ����`�M
		{
			sumForStd += pow(storeInput[i] - average, 2);
		}
		std_deviation = sqrt(sumForStd / numbersInput);//��X�зǮt
		cout << "Average:" << average << "	Standard deviation:" << std_deviation<<endl;
		storeInput.clear();//�M��vector����������l��
		
	}
}