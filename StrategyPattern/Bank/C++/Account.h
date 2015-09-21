#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "Common.h"
#include "Withdrawal.h"

class Account
{
protected :
	struct tm openningDate;
	int balance;
	Withdrawal* transaction;

public :
	Account()
	{
		time_t now;
		now = time(NULL);
		openningDate = *localtime(&now);
		
		//openningDate = tm;
		balance = 0;
		transaction = NULL;
	}
	~Account(){};

	void deposit(int money);
	int getBalance();
	void setTransaction(Withdrawal* newTransaction);
	void performTransaction(int money);
	virtual void display() = 0;
};

#endif