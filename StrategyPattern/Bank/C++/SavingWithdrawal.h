#ifndef __SAVINGWITHDRAWAL_H__
#define __SAVINGWITHDRAWAL_H__

#include "Withdrawal.h"
//#include "Common.h"

class SavingWithdrawal : public Withdrawal
{
private:
	bool isExpired;
	int balance;

public:
	SavingWithdrawal(bool isExpiredCheck, int accountBalance)
	{
		isExpired = isExpiredCheck;
		balance = accountBalance;
	}
	~SavingWithdrawal(){};

	void withdraw(int money);
	void setBalance(int newBalance);
	int getBalance();
};

#endif