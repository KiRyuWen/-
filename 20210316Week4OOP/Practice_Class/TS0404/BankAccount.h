// Name: Ã¹¤åæf
// Date: March 18, 2021
// Last Update: March 18, 2021
// Problem statement: ¿é¥XBankAccount
#include <iostream>
using namespace std;

class BankAccount
{
private:
	int balance;
	static int total;
public:
	BankAccount();
	BankAccount(int input);
	void withdraw(int output);
	void save(int input);
	int getBalance();
	static int getAllMoneyInBank();
};