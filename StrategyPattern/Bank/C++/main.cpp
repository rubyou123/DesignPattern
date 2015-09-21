#include "MinusAccount.h"
#include "MinusWithdrawal.h"
#include "NormalAccount.h"
#include "NormalWithdrawal.h"
#include "SavingAccount.h"
#include "SavingWithdrawal.h"

int main()
{
		Account* normalAccount = new NormalAccount();
		//5000 �Ա�

		cout << "===== Normal Account 5000 �Ա� =====" <<endl;
		normalAccount->deposit(5000);
		normalAccount->display();

		cout << "===== Normal Account 1000 ���� ====="<<endl;
		normalAccount->performTransaction(1000);
		normalAccount->display();
		
		cout << endl;

		Account* minusAccount= new MinusAccount('A');
		//6000 �Ա�
		cout << "===== Minus Account 6000 �Ա� =====" <<endl;
		minusAccount->deposit(6000);
		minusAccount->display();
		//30000 ����
		cout << "===== Minus Account 30000 ���� =====" <<endl;
		minusAccount->performTransaction(30000);
		minusAccount->display();
		cout <<"===== Minus Account 100000 ���� =====" <<endl;
		// 100000 ����
		minusAccount->performTransaction(100000);
		minusAccount->display();
		cout << endl;


		Account* savingAccount = new SavingAccount(false);
		//10000 �Ա�
		cout <<"===== Saving Account 10000 �Ա� =====" <<endl;
		savingAccount->deposit(10000);
		savingAccount->display();
		//5000 ����
		cout <<"===== Saving Account 5000 ���� ====="<<endl;
		savingAccount->performTransaction(5000);
		savingAccount->display();
		//���� �� ���
		cout <<"===== Saving Account ���� ������ ��� ====="<<endl;
		Account* savingAccount2 = new SavingAccount(true);
		cout <<"===== Saving Account 10000 �Ա� =====" <<endl;
		savingAccount2->deposit(10000);
		cout <<"===== Saving Account 5000 ���� ====="<<endl;
		savingAccount2->performTransaction(5000);
		savingAccount2->display();

		int A;
		cin >>A;
}