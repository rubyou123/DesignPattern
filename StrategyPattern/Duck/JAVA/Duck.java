package DUCK;

public abstract class Duck { 
	FlyBehavior flyBehavior; //(Polymorphic) Composition

	public Duck() { }

	abstract void display();
	public void swim() { System.out.println("All ducks float, even decoys!"); }
	public void performFly() { flyBehavior.fly(); } // 위임 & 다형성

	// 실행 중 행동 변경 (optional)
	public void setFlyBehavior(FlyBehavior fb) {  flyBehavior = fb; }
}