#ifndef __FLYWITHWINGS_H__
#define __FLYWITHWINGS_H__

#include "FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
	void fly()
	{
		cout << "I'm flying!!" <<endl;
	}
};

#endif