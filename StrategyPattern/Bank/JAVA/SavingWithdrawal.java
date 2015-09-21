package ACCOUNT;

public class SavingWithdrawal  implements Withdrawal {

	boolean isExpired;
	int balance;
	
	public SavingWithdrawal(boolean isExpiredCheck, int accountBalance)
	{
		isExpired = isExpiredCheck;
		balance = accountBalance;
	}
/*	public void setIsExpired(boolean isExpiredCheck)
	{
		isExpired = isExpiredCheck;
	}
	*/
	@Override
	public void withdraw(int money) {
		
		if(isExpired)
		{
			if(money <= balance)
			{
				balance = balance - money;
				
				System.out.println("You withdraw " + money + ". Success");
				System.out.println("Your Saving Account balance is " + balance );
			}
			else
			{
				System.out.println("You withdraw " + money + ". Fail");
				System.out.println("Money is more than balance");
				System.out.println("Your Saving Account is " + balance );
			}
		}
		else
		{
			System.out.println("This account is not expired");
		}
		
	}
	@Override
	public void setBalance(int newBalance) {
		// TODO Auto-generated method stub
		balance = newBalance;
		
	}
	@Override
	public int getBalance() {
		// TODO Auto-generated method stub
		return balance;
	}

	
}
