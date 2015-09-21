#include "SavingWithdrawal.h"

void SavingWithdrawal::withdraw(int money)
{
	if(isExpired)
		{
		if(money <= balance)
		{
			balance = balance - money;
			
			cout << "You withdraw " <<money << ". Success" <<endl;
			cout << "Your Saving Account balance is " << balance <<endl;
		}
		else
		{
			cout << "You withdraw " <<money << ". Fail" <<endl;
			cout << "Money is more than balance" << endl;
			cout << "Your Saving Account balance is " << balance <<endl;

		}
	}
	else
	{
		cout << "This account is not expired" << endl;
	}
}

void SavingWithdrawal::setBalance(int newBalance)
{
	balance = newBalance;
}

int SavingWithdrawal::getBalance()
{
	return balance;
}
