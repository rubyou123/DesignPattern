#ifndef __SAVINGACCOUNT_H__
#define __SAVINGACCOUNT_H__

#include  "Account.h"
#include "SavingWithdrawal.h"

class SavingAccount : public Account
{
private:
	bool isExpired;
public:
	SavingAccount(bool isExpiredCheck)
	{
		isExpired = isExpiredCheck;
		transaction = new SavingWithdrawal(isExpired, balance);
	}
	void display();
};

#endif