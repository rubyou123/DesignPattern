#include "MinusAccount.h"

void MinusAccount::setCredit(char newChar)
{
	Creditaraing = newChar;
	((MinusWithdrawal*) transaction)->setCredit(Creditaraing);

}

void MinusAccount::display()
{
	cout << "This is Minus Account " <<endl;
	cout << "Balance : " << balance <<endl;
	cout << "Account openning : " << openningDate.tm_year+ 1900 << "/" <<openningDate.tm_mon <<"/" <<
		openningDate.tm_mday <<" " << openningDate.tm_hour << ":" << openningDate.tm_min <<":"<< openningDate.tm_sec<< endl;
	cout << "Credit : " << Creditaraing <<endl;
}
