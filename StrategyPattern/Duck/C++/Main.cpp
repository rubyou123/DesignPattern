#include "FlyNoWay.h"
#include "FlyRocketPowered.h"
#include "FlyWithWings.h"
#include "MallardDuck.h"
#include "RubberDuck.h"

int main()
{
	Duck* mallard = new MallardDuck();
	mallard->performFly();
	mallard->display();

	Duck* rubber = new RubberDuck();
	rubber->performFly();
	rubber->display();

	rubber->setFlyBehavior(new FlyRocketPowered()); // ���� �� ���� ����
	rubber->performFly();
	rubber->display();

	int a;
	cin >>a;
}