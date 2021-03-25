#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void sort(vector<int>& data1, vector<int>& data2)
{
	for (int i = 0; i < data1.size(); i++)
	{
		for (int j = 0; j < data1.size() - 1 - i; j++)
		{
			if (data1[j] < data1[j + 1])
			{
				int tmp1, tmp2;
				tmp1 = data1[j];
				data1[j] = data1[j + 1];
				data1[j + 1] = tmp1;
				tmp2 = data2[j];
				data2[j] = data2[j + 1];
				data2[j + 1] = tmp2;
			}
		}
	}
}
int main()
{
	vector<int>StoreNum, CountNum;
	int num, count = 0;
	bool FIND = false;

	while (cin>>num)//read until Ctrl+z
	{
		for (int i = 0; i < count; i++)
		{
			FIND = false;
			if (num == StoreNum[i])//find data number of input +1 and change the find state;
			{
				CountNum[i]++;
				FIND = true;
				break;
			}
		}

		if (FIND == false)//if not found push the num into array
		{
			count++;
			StoreNum.push_back(num);
			CountNum.push_back(1);
		}
	}
	sort(StoreNum, CountNum);//sort the num to decend
	cout << "N\tcount" << endl;
	for (int i = 0; i < StoreNum.size(); i++)
	{
		cout << StoreNum[i] << "\t" << CountNum[i] << endl;
	}

}