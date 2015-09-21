package ACCOUNT;

public class MinusWithdrawal implements Withdrawal {

	int balance;
	char Creditrating;
	
	public MinusWithdrawal(char credit, int newBalance)
	{
		balance = newBalance;
		Creditrating = credit;
	}
	
	public void setCredit(char newCredit)
	{
		Creditrating = newCredit;
	}
	
	@Override
	public void withdraw(int money) {
		int limitMoney = 0;
		switch(Creditrating)
		{
		case 'A':
			limitMoney = 50000;
			break;
		case 'B':
			limitMoney = 30000;
			break;
		case 'C':
			limitMoney = 10000;
			break;
		default:
			limitMoney = 5000;
			break;	
		}
	
		if(limitMoney + balance >= money)
		{
			balance = balance - money;
			System.out.println("You withdraw " + money + ". Success");
			System.out.println("Your Minus Account credit is " + Creditrating );
			System.out.println("Your Minus Account credit rating is " + limitMoney );
			System.out.println("Your Minus Account balance is " + balance );
			
			
		}
		else
		{
			System.out.println("You withdraw " + money + ". Fail");
			System.out.println("Money is more than balance and creditraing");
			System.out.println("Your Minus Account credit is " + Creditrating );
			System.out.println("Your Minus Account credit rating is " + limitMoney );
			System.out.println("Your Minus Account balance is " + balance );
		}
	}
		
	public void setBalance(int newBalance) {
		// TODO Auto-generated method stub
		balance = newBalance;
	}
	public int getBalance() {
		// TODO Auto-generated method stub
		return balance;
	}

}
