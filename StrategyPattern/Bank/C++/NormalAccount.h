#ifndef __NORMALACCOUNT_H__
#define __NORMALACCOUNT_H__

#include "Account.h"
#include "NormalWithdrawal.h"

class NormalAccount :public Account
{
private:

public:
	NormalAccount()
	{
		transaction = new NormalWithdrawal(balance);
	}

	void display();
};

#endif