package inheritence;

import encapsulation.EncapsulationIntro;

public class Inheritence {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person p1 = new Person();
		p1.age = 21;
		p1.name = "Kulyash";
		System.out.println(p1.name);
		Person p2 = new Person(21, "Kulyash Dahiya");
		System.out.println(Person.count);
		System.out.println(p2.name + " " + p2.age);
		p2.code();

		EncapsulationIntro obj = new EncapsulationIntro();
		obj.dowork();

		ChildClass obj1 = new ChildClass();
		obj1.eater();

		Developer d1 = new Developer(21, "Kulyash Dahiya");
		d1.code();

		Dancer d2 = new Dancer(21, "He");
		d2.dance();

		d2.walk();

		boolean isAdmin = true;

		Laptop l1 = new Laptop();
		l1.setPrice(isAdmin, 83610);
		l1.setRam(16);

		isAdmin = false;
		Laptop l2 = new Laptop();
		l2.setRam(8);
		l2.setPrice(isAdmin, 83690);

		System.out.println(l1.getRam());
		System.out.println(l1.showPrice());
		System.out.println(l2.getRam());
		System.out.println(l2.showPrice());
//		l1.showPrice();

	}

}

class Laptop {

	int Ram;
	private int price;

	public void setPrice(boolean isAdmin, int price) {
		// check authority
		if (isAdmin) {
			this.price = price;
		} else {
			System.out.println("Permission Denied");
			this.price = -1;
		}
	}

	int showPrice() {
		// System.out.println(price);
		return price;
	}

	public int getRam() {
		return Ram;
	}

	public void setRam(int ram) {
		Ram = ram;
	}

}

class Person {
	int age;
	String name;

	static int count;

	public Person() {
		count++;
		System.out.println("creating an object");
	}

	public Person(int age, String name) {
		this();
		this.age = age;
		this.name = name;
	}

	protected void code() {
		System.out.println(name + " codes like\n a pro");
	}

	void walk() {
		System.out.println(name + " walks at night after dinner");
	}
}

class Dancer extends Person {

	public Dancer(int age, String name) {
		super(age, name);

	}

	void dance() {
		System.out.println(name + " dances like a pro too");
	}
}
