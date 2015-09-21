#ifndef __DUCK_H__
#define __DUCK_H__

#include "Common.h"
#include "FlyBehavior.h"

class Duck
{
protected:
	FlyBehavior* flyBehavior;
public:
	Duck(){}
	~Duck(){};

	virtual void display() = 0;
	void swim(){};
	void performFly(){flyBehavior->fly();}
	void setFlyBehavior(FlyBehavior* fb)
	{flyBehavior = fb ;}
};

#endif