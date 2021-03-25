#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	ifstream FILE("grade.txt", ifstream::in);//輸入
	ofstream output("grades.Output", ofstream::out);//輸出
	int CountNum[6] = { 0 };//儲存0~5的資料
	int num;
	if (FILE.is_open() == false)
		cout << "Error" << endl;
	else
	{
		while (!FILE.eof())//讀到結束
		{
			FILE >> num;
			CountNum[num]++;//第幾個東西就地幾個++
		}
		for (int i = 0; i < 6; i++)
		{
			output << CountNum[i] << " grade(s) of " << i << endl;//file output
		}
	} 
	
}