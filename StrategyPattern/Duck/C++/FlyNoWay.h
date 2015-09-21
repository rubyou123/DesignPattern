#ifndef __FLYNOWAY_H__
#define __FLYNOWAY_H__

#include "FlyBehavior.h"

class FlyNoWay:public FlyBehavior
{
public:
	void fly()
	{
		cout <<"I can't fly"<<endl;
	}
};

#endif