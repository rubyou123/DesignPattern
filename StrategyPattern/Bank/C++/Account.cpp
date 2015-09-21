#include "Account.h"

void Account::deposit(int money)
{
	cout << "You deposit " << money << endl;
	balance  += money;
	transaction->setBalance(balance);
}

int Account::getBalance()
{
	return balance;
}

void Account::setTransaction(Withdrawal* newTransaction)
{
	transaction = newTransaction;
}

void Account::performTransaction(int money)
{
	transaction->withdraw(money);
	balance = transaction->getBalance();
}

