#ifndef __MINUSWITHDRAWAL_H__
#define __MINUSWITHDRAWAL_H__

#include "Withdrawal.h"

class MinusWithdrawal :public Withdrawal
{
private :
	int balance;
	char Creditrating;
public:
	MinusWithdrawal(char credit, int newBalance)
	{
		Creditrating = credit;
		balance = newBalance;
	}
	~MinusWithdrawal(){};

	void setCredit(char newCredit);
	void withdraw(int money);
	void setBalance(int balance);
	int getBalance();
};

#endif