package DUCK;

public class MiniDuckSimulator1 {

	public static void main(String[] args) {

		Duck mallard = new MallardDuck();
		mallard.performFly();
		mallard.display();

		Duck rubber = new RubberDuck();
		rubber.performFly();
		rubber.display();

		rubber.setFlyBehavior(new FlyRocketPowered()); // 실행 중 행위 변경
		rubber.performFly();
		rubber.display();

	}
}
