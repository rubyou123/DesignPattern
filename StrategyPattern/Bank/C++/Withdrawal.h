#ifndef __WITHDRAWAL_H__
#define __WITHDRAWAL_H__

#include "Common.h"

class Withdrawal
{
public:
	virtual void withdraw(int money) = 0;
	virtual void setBalance(int newBalance) = 0;
	virtual int getBalance() = 0;
};

#endif