package inheritence;

public class ChildClass {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Developer d1 = new Developer(21, "Kulyash Dahiya");
		d1.code();
		d1.walk();

	}
	
	public void eater() {
		System.out.println("He is a terrific eater");
	}

}

class Developer extends Person {
	public Developer(int age, String name) {
		super(age, name);
	}

}