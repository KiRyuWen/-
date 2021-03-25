#include <iostream>
#include <fstream>
using namespace std;

bool check3x3(int sudoku[][9], int r1, int r2) //r1 ¤W¤U r2¥ª¥k
{
	int sumsudoku = 0;
	for (int num = 1; num <= 9; num++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (num == sudoku[i + r1 * 3][j + r2 * 3])
				{
					sumsudoku += num;
					break;
				}
			}
		}
	}

	if (sumsudoku == 45)
		return true;
	return false;
}
bool check_row(int sudoku[][9], int row)
{
	int sumsudoku = 0;
	for (int num = 1; num <= 9; num++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (num == sudoku[row][j])
			{
				sumsudoku += num;
				break;
			}
		}
	}

	if (sumsudoku == 45)
		return true;
	return false;
}
bool check_col(int sudoku[][9], int col)
{
	int sumsudoku = 0;
	for (int num = 1; num <= 9; num++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (num == sudoku[i][col])
			{
				sumsudoku += sudoku[i][col];
				break;
			}
		}
	}

	if (sumsudoku == 45)
		return true;
	return false;
}
int main()
{
	int sudoku[9][9] = { 0 };
	char comma;
	int num;
	while(cin>>num)
	{
		bool sudokuOrNot = true;
		bool flag = false;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if(i==0&&j==0)
				{
					sudoku[i][j] = num;
					cin >> comma;
				}
				else if (j == 8)
				{
					cin >> sudoku[i][j];
				}
				else
				{
					cin >> sudoku[i][j];
					cin >> comma;
				}
				if (sudoku[i][j] > 9 || sudoku[i][j] < 0)
					flag = false;
			}
		}
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				sudokuOrNot = check3x3(sudoku, i, j);
			if(sudokuOrNot==false)
			{
				flag = 1;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			sudokuOrNot = check_row(sudoku, i);
			if (sudokuOrNot == false)
				flag = 1;
		}
		for (int j = 0; j < 9; j++)
		{
			sudokuOrNot = check_col(sudoku, j);
			if (sudokuOrNot == false)
				flag = 1;
		}
		if (flag == false)
		{

			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}
}