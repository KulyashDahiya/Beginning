package collectionFramework;

import java.util.*;

public class LearnPriorityQueue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		PriorityQueue<Integer> pq = new PriorityQueue<>();

		pq.offer(40);
		pq.offer(12);
		pq.offer(24);
		pq.offer(36);

		// will print with min Heap
		System.out.println(pq);

		// will remove element which has most priority
		pq.poll(); // in this case the element is the smallest one

		System.out.println(pq);

	}

}
