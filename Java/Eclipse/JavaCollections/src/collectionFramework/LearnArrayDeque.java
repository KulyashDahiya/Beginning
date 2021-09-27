package collectionFramework;

import java.util.*;

public class LearnArrayDeque {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayDeque<Integer> adq = new ArrayDeque<>();
		
		adq.offer(12);
		adq.offer(13);
		adq.offerFirst(45);
		adq.offerLast(54);
		adq.offer(77);
		
		System.out.println(adq);
		
		System.out.println(adq.peek());
		System.out.println(adq.peekFirst());
		System.out.println(adq.peekLast());
		
		System.out.println(adq);
		System.out.println(adq.poll());
		System.out.println(adq);
		
		System.out.println(adq.pollFirst());
		System.out.println(adq);
		
		System.out.println(adq.pollLast());
		System.out.println(adq);
		
		

	}

}
