#include "BankAccount.h"
BankAccount::BankAccount() //default balance
{
	this->balance = 0;
}
BankAccount::BankAccount(int input) // initialize balance with input
{
	this->balance = input;
	this->total += input;
}

void BankAccount::withdraw(int output)//take out your money
{
	this->total -= output;
	this->balance -= output;
}

void BankAccount::save(int input)     // store money
{

	this->total += input;
	this->balance += input;
}
// get balance
int BankAccount::getBalance() { return this->balance; }

// get total
int BankAccount::total;
int BankAccount::getAllMoneyInBank() { return total; }

