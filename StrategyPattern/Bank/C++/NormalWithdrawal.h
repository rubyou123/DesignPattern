#ifndef __NORMALWITHDRAWAL_H__
#define __NORMALWITHDRAWAL_H__

#include "Withdrawal.h"

class NormalWithdrawal : public Withdrawal
{
private:
	int balance;

public:
	NormalWithdrawal(int accountBalance)
	{
		balance = accountBalance;
	}
	~NormalWithdrawal(){};

	void withdraw(int money);
	void setBalance(int newBalance);
	int getBalance();
};

#endif