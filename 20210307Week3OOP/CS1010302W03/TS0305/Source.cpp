#include <iostream>
#include <string>
#include <vector>
#define ERROR
using namespace std;
void printoutError()
{
	cout << "Out of range." << endl<<endl;
}
void printoutPattern(const vector<vector<char>> array, int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i].at(j);
		}
		cout << endl;
	}
	cout << endl;
}
void DrawS(vector<vector<char>>& v, int w, int x, int y, bool& Error)
{
	
	if (w > v.size() || w > v[0].size() || y + w > v.size() || x + w > v[0].size())
	{
		printoutError();
		Error = true;
	}
	else
	{
		for (int i = y; i < y+w; i++)
		{
			for (int j = x; j < x+w; j++)
			{
				v[i].at(j) = 'X';
			}
		}
	}

}
void DrawL(vector<vector<char>>& v, int x, int y, int x2, int y2, bool& Error)
{
	if (y >= v.size() || x >= v[0].size() || y2 >= v.size() || x2 >= v[0].size())
	{
		printoutError();
		Error = true;
	}
	else
	{
		int subX2_X = x2 - x, subY2_Y = y2 - y;
		if (subX2_X > 0 && subY2_Y > 0)
		{
			for (int i = y, j = x; i <= y2 && j <= x2; i++, j++)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X < 0 && subY2_Y > 0)
		{
			for (int i = y, j = x; i <= y2 && j >= x2; i++, j--)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X < 0 && subY2_Y < 0)
		{
			for (int i = y, j = x; i >= y2 && j >= x2; i--, j--)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X > 0 && subY2_Y < 0)
		{
			for (int i = y, j = x; i >= y2 && j <= x2; i--, j++)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X == 0 && subY2_Y > 0)//짾そ퐑
		{
			for (int i = y, j = x; i <= y2; i++)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X < 0 && subY2_Y == 0)//ⅹそ퐑
		{
			for (int i = y, j = x; j >= x2; j--)
			{
				v[i].at(j) = 'X';
			}
		}
		else if (subX2_X == 0 && subY2_Y <= 0)//쨁そ퐑
		{
			for (int i = y, j = x; i >= y2; i--)
			{
				v[i].at(j) = 'X';
			}
		}
		else//쩵そ퐑
		{
			for (int i = y, j = x; j <= x2; j++)
			{
				v[i].at(j) = 'X';
			}
		}
	}
}
void DrawT(vector<vector<char>>& v, int w, int x, int y, string TOrder, bool& Error)
{
	string LU = "LU", LD = "LD", RU = "RU", RD = "RD";
	int num1, num2;
	if (TOrder == LU)
	{
		num1 = x - w+1, num2 = y - w+1;
		if (num1 < 0 || num2 < 0)
		{
			printoutError();
			Error = true;
		}
		else
		{
			for(int i=0;i<w;i++)
			{
				for(int j=0;i+j<w;j++)
				{
					v[y-i].at(x-j) = 'X';
				}
			}
		}
	}
	else if (TOrder == LD)
	{
		num1 = x - w + 1, num2 = y + w-1;
		if (num1<0 || num2>v.size())
		{
			printoutError();
			Error = true;
		}
		else
		{
			for (int i = 0; i < w; i++)
			{
				for (int j = 0; i + j < w; j++)
				{
					v[y + i].at(x - j) = 'X';
				}
			}
		}
	}
	else if (TOrder == RU)
	{
		num1 = x + w-1, num2 = y - w+1;
		if(num1>v[0].size()||num2<0)
		{
			printoutError();
			Error = true;
		}
		else
		{
			for (int i = 0; i < w; i++)
			{
				for (int j = 0; i + j < w; j++)
				{
					v[y - i].at(x + j) = 'X';
				}
			}
		}
	}
	else if (TOrder == RD)
	{
		num1 = x + w-1, num2=y + w-1;
		if(num1>v[0].size()||num2>v.size())
		{
			printoutError();
			Error = true;
		}
		else
		{
			for (int i = 0; i < w; i++)
			{
				for (int j = 0; i + j < w; j++)
				{
					v[y + i].at(x + j) = 'X';
				}
			}
		}
	}
	else
	{
		cout << "AAAAAAAAAAAAAAAAAAA" << endl;
	}
}

int main()
{
	vector<vector<char>> array;
	vector<char> arrayStar;
	string S = "S", T = "T", L = "L", EXIT = "EXIT";

	string order;
	int m, n;

	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arrayStar.push_back('*');
		}
		array.push_back(arrayStar);
	}

	int w, x, y, x2, y2;
	while (cin >> order)
	{
		bool Error = false;
		if (order == S)
		{
			cin >> w >> x >> y;
			DrawS(array, w, x, y, Error);
		}
		else if (order == T)
		{
			string dir;
			cin >> w >> x >> y >> dir;
			DrawT(array, w, x, y, dir, Error);
		}
		else if (order == L)
		{
			cin >> x >> y >> x2 >> y2;
			DrawL(array, x, y, x2, y2, Error);
		}
		else
		{
			return 0;

		}
		if (Error == false)
			printoutPattern(array, m, n);
	}
}