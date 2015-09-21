#ifndef __MINUSACCOUNT_H__
#define __MINUSACCOUNT_H__

#include "Account.h"
#include "MinusWithdrawal.h"

class MinusAccount :public Account
{
private:
	char Creditaraing;

public:
	MinusAccount(char credit)
	{
		Creditaraing = credit;
		transaction = new MinusWithdrawal(Creditaraing, balance);
	}
	~MinusAccount(){};

	void setCredit(char newCredit);
	void display();
};

#endif