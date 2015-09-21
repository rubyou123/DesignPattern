package ACCOUNT;

public class Bank {

	public static void main(String[] args) {
		
		Account normalAccount = new NormalAccount();
		//5000 입금
		System.out.println("===== Normal Account 5000 입금 =====");
		normalAccount.deposit(5000);
		normalAccount.display();
		System.out.println("===== Normal Account 1000 인출 =====");
		//1000 인출
		normalAccount.performTransaction(1000);
		normalAccount.display();
		
		System.out.println();

		Account minusAccount= new MinusAccount('A');
		//6000 입금
		System.out.println("===== Minus Account 6000 입금 =====");
		minusAccount.deposit(6000);
		minusAccount.display();
		//30000 인출
		System.out.println("===== Minus Account 30000 인출 =====");
		minusAccount.performTransaction(30000);
		minusAccount.display();
		System.out.println("===== Minus Account 100000 인출 =====");
		// 100000 인출
		minusAccount.performTransaction(100000);
		minusAccount.display();
		
		
		System.out.println();
		
		Account savingAccount = new SavingAccount(false);
		//10000 입금
		System.out.println("===== Saving Account 10000 입금 =====");
		savingAccount.deposit(10000);
		savingAccount.display();
		//5000 인출
		System.out.println("===== Saving Account 5000 인출 =====");
		savingAccount.performTransaction(5000);
		savingAccount.display();
		//만기로 변경
		System.out.println("===== Saving Account 만기일때 =====");
		
		
		Account savingAccount2 = new SavingAccount(true);
		//10000 입금
		System.out.println("===== Saving Account 10000 입금 =====");
		savingAccount2.deposit(10000);
		savingAccount2.display();
		//5000 인출
		System.out.println("===== Saving Account 5000 인출 =====");
		savingAccount2.performTransaction(5000);
		savingAccount2.display();
		
		System.out.println();
	}
}
