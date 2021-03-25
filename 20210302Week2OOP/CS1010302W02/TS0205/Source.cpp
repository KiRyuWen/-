#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct BigInt
{
	string Num;
};
bool specify(BigInt& a)//�P�_�r��O���O���b0~9����
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
BigInt add(const BigInt& lhs, const BigInt& rhs)//�N��Ƭۥ[
{
	int numsize = lhs.Num.size() - 1;//�Ĥ@�Ӧr�ꪺsize ex 5���
	int numsize2 = rhs.Num.size() - 1;//�ĤG�Ӧr�ꪺsize ex. 3���
	BigInt result;
	char topush;						//�N��r����X�Ӱ��B�����x�s���ܼ�
	vector<char> pushin;				//�x�s�r�����F�� �n��i�hResult
	int c0 = 0;							//�P�_�O�_�i��
	while (numsize >= 0 || numsize2 >= 0)//���i��5���+3���
	{

		if (numsize2 < 0)//�p�G���P��Ƭۥ[ �N�ѤU����ƥ�ivector�x�s **���n�Ҽ{���i��i��
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
		if ((int)topush >= 10)//�P�_�i��
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
	if (c0 == 1)//�p�G�P��Ƭۥ[���i��i��
	{
		result.Num.push_back('1');
	}
	for (int i = pushin.size() - 1; i >= 0; i--)//�N�x�s���F���i�h
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