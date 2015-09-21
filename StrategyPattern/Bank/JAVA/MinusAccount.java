package ACCOUNT;

public class MinusAccount  extends Account{

	char Creditrating;

	public MinusAccount(char credit)
	{
		Creditrating = credit;
		transaction = new MinusWithdrawal(Creditrating, balance);
	}
	public void setCreditraing(char credit)
	{
		Creditrating = credit;
		((MinusWithdrawal) transaction).setCredit(Creditrating);
	}
	
	@Override
	void display() {
		System.out.println("This is Minus Account");
		System.out.println("Balance  : " + balance);
		System.out.println("Account openning : " + openningDate.toString());
		System.out.println("Credit : " + Creditrating);
	}
	
	
}
