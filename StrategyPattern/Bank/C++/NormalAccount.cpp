#include  "NormalAccount.h"

void NormalAccount::display()
{

	cout << "This is Normal account" << endl;
	cout << "Balance  : " << balance << endl;
	cout << "Account openning : " << openningDate.tm_year+ 1900 << "/" <<openningDate.tm_mon <<"/" <<
		openningDate.tm_mday <<" " << openningDate.tm_hour << ":" << openningDate.tm_min <<":"<< openningDate.tm_sec<< endl;
}