#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	ifstream FILE("grade.txt", ifstream::in);//��J
	ofstream output("grades.Output", ofstream::out);//��X
	int CountNum[6] = { 0 };//�x�s0~5�����
	int num;
	if (FILE.is_open() == false)
		cout << "Error" << endl;
	else
	{
		while (!FILE.eof())//Ū�쵲��
		{
			FILE >> num;
			CountNum[num]++;//�ĴX�ӪF��N�a�X��++
		}
		for (int i = 0; i < 6; i++)
		{
			output << CountNum[i] << " grade(s) of " << i << endl;//file output
		}
	} 
	
}