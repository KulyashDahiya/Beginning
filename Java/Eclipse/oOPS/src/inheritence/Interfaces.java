package inheritence;

public class Interfaces implements Car, Persona {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

	public void start() {
		System.out.println("Car is starting");
	}
	
	public void sing() {
		System.out.println("He is singing");
	}

}

interface Car {
	void start();
}

interface Persona {
	void sing();
}