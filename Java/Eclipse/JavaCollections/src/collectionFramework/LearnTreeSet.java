package collectionFramework;

import java.util.*;

public class LearnTreeSet {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// ALSO SORTS AS PER BINARY SEARCH TREE
		Set<Integer> set = new TreeSet<>();

		set.add(7);
		set.add(61);
		set.add(5);
		set.add(44);
		// it does not add duplicate elements
		set.add(61);
		set.add(61);
		set.add(3);

		// Returning in ascending order
		System.out.println(set);

		System.out.println(set.size());

		set.remove(44);

		System.out.println(set);

		System.out.println(set.contains(5));

		System.out.println(set.isEmpty());

		System.out.println(set.size());

		// To clear the set
		set.clear();

		System.out.println(set.size());
		//KEEP HUSTLING KEEP SMILING
	}

}
