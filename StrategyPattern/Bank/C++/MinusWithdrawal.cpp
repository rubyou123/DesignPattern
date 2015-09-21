#include "MinusWithdrawal.h"

void MinusWithdrawal::setBalance(int newBalance)
{
	balance = newBalance;
}

void MinusWithdrawal::withdraw(int money)
{
	int limitMoney = 0;
	switch(Creditrating)
	{
	case 'A':
		limitMoney = 50000;
		break;
	case 'B':
		limitMoney = 30000;
		break;
	case 'C':
		limitMoney = 10000;
		break;
	default:
		limitMoney = 5000;
		break;	
	}
	
	if(limitMoney + balance >= money)
	{
		balance = balance - money;
		cout << "You withdraw "  << money << ". Success" <<endl;
		cout << "Your Minus Account credit is "<<Creditrating <<endl;
		cout << "Your Minus Account credit rating is " << limitMoney <<endl;
		cout << "Your Minus Account balance is " << balance << endl;
	}
	else
	{
		cout << "You withdraw "  << money <<". Fail" <<endl;
		cout << "Money is more than balance and creditraing" <<endl;
		cout << "Your Minus Account credit is "<<Creditrating <<endl;
		cout << "Your Minus Account credit rating is " << limitMoney <<endl;
		cout << "Your Minus Account balance is " << balance << endl;
	}
}

void MinusWithdrawal::setCredit(char newCredit)
{
	Creditrating = newCredit;
}

int MinusWithdrawal::getBalance()
{
	return balance;
}