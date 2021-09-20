package collectionArray;

import java.util.ArrayList;

public class LearnArrayList {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> list = new ArrayList<>();
		list.add(1);
		list.add(2);
		list.add(3);
		System.out.println(list);
		
		list.add(5); //this will add 5 at the end
		System.out.println(list);
		
		list.add(1, 50);
		System.out.println(list);
		
		System.out.println(list.get(1));
		
		
	}

}
