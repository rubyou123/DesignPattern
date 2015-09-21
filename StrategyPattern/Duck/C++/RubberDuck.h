#ifndef __RUBBERDUCK_H__
#define __RUBBERDUCK_H__

#include "Duck.h"
#include "FlyNoWay.h"

class RubberDuck:public Duck
{

public:
	RubberDuck()
	{
		flyBehavior = new FlyNoWay();
	}

	void display()
	{
		cout << "I'm a Rubber duck" << endl;
	}
};

#endif