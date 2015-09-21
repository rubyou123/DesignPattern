#include "NormalWithdrawal.h"

void NormalWithdrawal::withdraw(int money)
{
	if(money <= balance)
	{
		balance = balance - money;
			
		cout << "You withdraw " <<money << ". Success" << endl;
		cout << "Your Normal Account balance is " << balance <<endl;
	}
	else
	{
		cout << "You withdraw " <<money << ". Fail" << endl;
		cout << "Money is more than balance" << endl;
		cout << "Your Normal Account balance is " << balance <<endl;

	}
}

void NormalWithdrawal::setBalance(int newBalance)
{
	balance = newBalance;
}

int NormalWithdrawal::getBalance()
{
	return balance;
}