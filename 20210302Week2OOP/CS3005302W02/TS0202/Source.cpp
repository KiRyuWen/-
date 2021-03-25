#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
void sortArray(vector<string>& array,vector<double>& score)
{
	for(int i=0;i<array.size();i++)
	{
		for(int j=0;j<array.size()-i-1;j++)
		{
			if(score[j]<score[j+1])
			{
				double tmp = score[j];
				score[j] = score[j+1];
				score[j + 1] = tmp;
				string strtmp(array[j]);
				array[j] = array[j + 1];
				array[j + 1] = strtmp;
			}
		}
	}
}
void getHighScore(vector<string>& array,vector<double>& score)
{
	sortArray(array, score);
	for(int i=0;i<3;i++)
	{
		cout << array[i] << endl;
		cout << score[i] << endl;
	}
}

int main()
{
	vector<string>NameArray;
	vector<double>ScoreArray;
	string name;
	double score;
	int i = 0;
	string filename;
	cin >> filename;
	ifstream file(filename);
	if (!file)
		cout << "µLªk¶}±Ò";
	else
	{
		while (!file.eof())
		{
			file >> name >> score;
			NameArray.push_back(name);
			ScoreArray.push_back(score);

		}
		getHighScore(NameArray, ScoreArray);
	}
	
}