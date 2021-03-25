#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int findLongestNum(vector<string> strarr)
{
	int max = strarr[0].size();
	int i = 0;
	while (i < strarr.size())
	{
		if (max < strarr[i].size())
		{
			max = strarr[i].size();
		}
		i++;
	}
	return max;
}
int findLongestNum(vector<int> intarr)
{
	int max = intarr[0];
	int i = 0;
	while (i < intarr.size())
	{
		if (intarr[i] > max)
		{
			max = intarr[i];
		}
		i++;
	}
	return log10(max) + 1;//用log10求int幾位數
}
int main()
{
	unsigned int employeeNum;
	vector<string> Name;
	string NameInput;
	vector<int> Salary, Award;
	int SalaryInput, AwardInput;
	while (cin >> employeeNum)
	{
		int i = 0;
		while (i < employeeNum)//將資料輸入進去
		{
			cin >> NameInput >> SalaryInput >> AwardInput;
			Name.push_back(NameInput), Salary.push_back(SalaryInput), Award.push_back(AwardInput);
			i++;
		}
		int nameLong = findLongestNum(Name), SalaryLong = findLongestNum(Salary), AwardLong = findLongestNum(Award);//找出個別資料中最長的位數
		for (int j = 0; j < employeeNum; j++)
		{
			cout << setw(nameLong) << Name[j] <<"|  " << setw(SalaryLong) << Salary[j] <<"|  " << setw(AwardLong) << Award[j] << endl;
		}
		Salary.clear(), Award.clear();//初始化
		Name.clear();
	}
	
	
}