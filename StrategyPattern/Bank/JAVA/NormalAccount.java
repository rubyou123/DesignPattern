package ACCOUNT;

import java.util.Date;

public class NormalAccount extends Account{

	public NormalAccount()
	{
		transaction = new NormalWithdraw(balance);
	}
	
	@Override
	void display() {
		System.out.println("This is Normal account");
		System.out.println("Balance  : " + balance);
		System.out.println("Account openning : " + openningDate.toString());
	}

}
