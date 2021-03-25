#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct BigInt
{
	string Num;
};
bool specify(BigInt& a)//耞﹃琌ぃ琌辅0~9ぇ丁
{
	int i = a.Num.size() - 1;
	while (i >= 0)
	{
		if (a.Num[i] > '9' || a.Num[i] < '0')
			return false;
		i--;
	}
	return true;
}
BigInt add(const BigInt& lhs, const BigInt& rhs)//盢ㄢ计
{
	int numsize = lhs.Num.size() - 1;//材﹃size ex 5计
	int numsize2 = rhs.Num.size() - 1;//材﹃size ex. 3计
	BigInt result;
	char topush;						//盢ㄢじъㄓ暗笲衡ㄓ纗跑计
	vector<char> pushin;				//纗じ狥﹁ 璶メ秈Result
	int c0 = 0;							//耞琌秈
	while (numsize >= 0 || numsize2 >= 0)//Τ5计+3计
	{

		if (numsize2 < 0)//狦ぃ计 盢逞计メ秈vector纗 **璶σ納Τ秈
		{
			topush = ((int)lhs.Num[numsize] - '0') + c0;
			numsize--;
		}
		else if (numsize < 0)
		{
			topush = (int)rhs.Num[numsize2] - '0' + c0;
			numsize2--;
		}
		else
		{
			topush = ((int)lhs.Num[numsize--] - '0' + (int)rhs.Num[numsize2--] - '0') + c0;
		}
		if ((int)topush >= 10)//耞秈
		{
			c0 = 1;
			topush -= 10;
		}
		else
		{
			c0 = 0;
		}
		topush += '0';
		pushin.push_back(topush);
	}
	if (c0 == 1)//狦计Τ秈
	{
		result.Num.push_back('1');
	}
	for (int i = pushin.size() - 1; i >= 0; i--)//盢纗狥﹁メ秈
	{
		result.Num.push_back(pushin[i]);
	}
	return result;
}
int main()
{
	int numInput;
	BigInt a, b;
	while (cin >> numInput)
	{
		for (int i = 0; i < numInput; i++)
		{
			cin >> a.Num >> b.Num;
			if (specify(a) && specify(b))
			{
				BigInt result = add(a, b);
				cout << result.Num << endl;
			}
			else
			{
				cout << "Not a valid number, please try again." << endl;
			}
		}

	}
}