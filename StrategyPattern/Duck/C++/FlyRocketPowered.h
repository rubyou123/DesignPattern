#ifndef __FLYROCKETPOWERED_H__
#define __FLYROCKETPOWERED_H__

#include "FlyBehavior.h"

class FlyRocketPowered :public FlyBehavior
{
public:
	void fly()
	{
		cout << "I'm RoketPowered flying!!" << endl;
	}
};

#endif