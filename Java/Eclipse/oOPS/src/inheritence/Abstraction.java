package inheritence;

public class Abstraction {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

//		Car c1 = new Car();
		Audi a1 = new Audi();
		a1.start();

	}

}

class Audi extends Cars {

	void start() {
		System.out.println("Audi is starting");
	}

}

class BMW extends Cars {

	void start() {
		System.out.println("BMW is starting");
	}

}

abstract class Cars {

	int price;

	abstract void start();

}
