package ACCOUNT;

public class NormalWithdraw implements Withdrawal  {

	int balance;
	
	public NormalWithdraw(int accountBalance)
	{
		balance = accountBalance;
	}
	
	public void withdraw(int money)
	{
		if(money <= balance)
		{
			balance = balance - money;
			
			System.out.println("You withdraw " + money + ". Success");
			System.out.println("Your Normal Account balance is " + balance );
		}
		else
		{
			System.out.println("You withdraw " + money + ". Fail");
			System.out.println("Money is more than balance");
			System.out.println("Your Normal Account is " + balance );
		}
	}

	@Override
	public void setBalance(int newBalance) {
		// TODO Auto-generated method stub
		balance = newBalance;
	}
	
	public int getBalance() {
		// TODO Auto-generated method stub
		return balance;
	}
}
