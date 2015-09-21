#include "MinusAccount.h"
#include "MinusWithdrawal.h"
#include "NormalAccount.h"
#include "NormalWithdrawal.h"
#include "SavingAccount.h"
#include "SavingWithdrawal.h"

int main()
{
		Account* normalAccount = new NormalAccount();
		//5000 입금

		cout << "===== Normal Account 5000 입금 =====" <<endl;
		normalAccount->deposit(5000);
		normalAccount->display();

		cout << "===== Normal Account 1000 인출 ====="<<endl;
		normalAccount->performTransaction(1000);
		normalAccount->display();
		
		cout << endl;

		Account* minusAccount= new MinusAccount('A');
		//6000 입금
		cout << "===== Minus Account 6000 입금 =====" <<endl;
		minusAccount->deposit(6000);
		minusAccount->display();
		//30000 인출
		cout << "===== Minus Account 30000 인출 =====" <<endl;
		minusAccount->performTransaction(30000);
		minusAccount->display();
		cout <<"===== Minus Account 100000 인출 =====" <<endl;
		// 100000 인출
		minusAccount->performTransaction(100000);
		minusAccount->display();
		cout << endl;


		Account* savingAccount = new SavingAccount(false);
		//10000 입금
		cout <<"===== Saving Account 10000 입금 =====" <<endl;
		savingAccount->deposit(10000);
		savingAccount->display();
		//5000 인출
		cout <<"===== Saving Account 5000 인출 ====="<<endl;
		savingAccount->performTransaction(5000);
		savingAccount->display();
		//만기 일 경우
		cout <<"===== Saving Account 만기 계좌일 경우 ====="<<endl;
		Account* savingAccount2 = new SavingAccount(true);
		cout <<"===== Saving Account 10000 입금 =====" <<endl;
		savingAccount2->deposit(10000);
		cout <<"===== Saving Account 5000 인출 ====="<<endl;
		savingAccount2->performTransaction(5000);
		savingAccount2->display();

		int A;
		cin >>A;
}