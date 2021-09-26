package collectionFramework;

import java.util.*;

public class LearnStack {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stack<String> animals = new Stack<>();

		animals.push("Lion");
		animals.push("Dog");
		animals.push("Cat");

		System.out.println("Animals: " + animals);
		System.out.println(animals.peek());
		animals.pop();
		System.out.println(animals.peek());

	}

}
