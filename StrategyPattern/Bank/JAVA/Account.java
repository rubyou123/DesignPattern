package ACCOUNT;

import java.util.Date;

public abstract class Account {

	Date openningDate;
	int balance;
	Withdrawal transaction;
	
	public Account()
	{
		openningDate = new Date();
		balance = 0;
		transaction = null;
	}
	
	void deposit(int money)
	{
		System.out.println("You deposit " + money);
		balance += money;
		transaction.setBalance(balance);
	}
	int getBalance()
	{
		return balance;
	}
	public void setTransaction(Withdrawal newTransaction)
	{
		transaction = newTransaction;
	}
	public void performTransaction(int money)
	{
		transaction.withdraw(money);
		balance = transaction.getBalance();
	}
	abstract void display();

	
}
