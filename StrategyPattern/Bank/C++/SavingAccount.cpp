#include "SavingAccount.h"


void SavingAccount::display()
{
	cout << "This is Minus Account " <<endl;
	cout << "Balance : " << balance <<endl;
	cout << "Account openning : " << openningDate.tm_year+ 1900 << "/" <<openningDate.tm_mon <<"/" <<
		openningDate.tm_mday <<" " << openningDate.tm_hour << ":" << openningDate.tm_min <<":"<< openningDate.tm_sec<< endl;
	cout << "Is account expired ?  ";
	if(isExpired)
		cout  << "yes"  <<endl;
	else
		cout  << "no"  <<endl;
}