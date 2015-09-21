package ACCOUNT;

public class SavingAccount extends Account{

	boolean isExpired;
	
	public SavingAccount(boolean isExpiredCheck)
	{
		isExpired = isExpiredCheck;
		transaction = new SavingWithdrawal(isExpired, balance);
	}
	
/*	public void setExpired(boolean isExpiredCheck )
	{
		isExpired = isExpiredCheck;
		((SavingWithdrawal) transaction).setIsExpired(isExpiredCheck);
		System.out.println("Your Saving Account is expired");
	}
	*/
	@Override
	void display() {
		System.out.println("This is Saving Account");
		System.out.println("Balance  : " + balance);
		System.out.println("Account openning : " + openningDate.toString());
		System.out.println("Is account expired ? " + isExpired);
	}

}
