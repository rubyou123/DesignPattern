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

	rubber->setFlyBehavior(new FlyRocketPowered()); // 실행 중 행위 변경
	rubber->performFly();
	rubber->display();

	int a;
	cin >>a;
}