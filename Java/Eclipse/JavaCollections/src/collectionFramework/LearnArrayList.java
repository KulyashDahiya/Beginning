package collectionFramework;

import java.util.*;

public class LearnArrayList {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> list = new ArrayList<>();
		list.add(1);
		list.add(2);
		list.add(3);
		System.out.println(list);

		list.add(5); // this will add 5 at the end
		System.out.println(list);

		list.add(1, 50);
		System.out.println(list);

		System.out.println(list.get(1));

		ArrayList<Integer> newList = new ArrayList<>();
		newList.add(150);
		newList.add(160);

		list.addAll(newList);
		System.out.println(list);

		list.set(3, 1000);
		System.out.println(list.contains(5));
		System.out.println(list);

		for (int i = 0; i < list.size(); i++) {
			System.out.println("The element is: " + list.get(i));
		}

		for (Integer el : list) {
			System.out.println("foreach element: " + el);
		}

		Iterator<Integer> it = list.iterator();

		while (it.hasNext()) {
			System.out.println("Iterator: " + it.next());
		}

//		System.out.println(list.get(5));
//		list.remove(1);
//		System.out.println(list);
//		list.remove(Integer.valueOf(150));
//		System.out.println(list);
//		list.clear();
//		System.out.println(list);

	}

}
