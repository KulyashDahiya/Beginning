package collectionFramework;

import java.util.*;

public class LearnPriorityQueue {
	// PRIORITY QUEUE USES MIN HEAP AS DEFAULT

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		PriorityQueue<Integer> pq = new PriorityQueue<>();

		pq.offer(40);
		pq.offer(12);
		pq.offer(24);
		pq.offer(36);

		// will print with min Heap
		System.out.println(pq);

		System.out.println(pq.peek());

		// will remove element which has most priority
		pq.poll(); // in this case the element is the smallest one

		System.out.println(pq);

		// FOR MAXIMUM ELEMENT WE USE COMPARATOR

		System.out.println("Reversing the Priority Queue\n for MAX HEAP");
		PriorityQueue<Integer> pq1 = new PriorityQueue<>(Comparator.reverseOrder());

		pq1.offer(40);
		pq1.offer(12);
		pq1.offer(24);
		pq1.offer(36);

		System.out.println(pq1);

		System.out.println(pq1.peek());
		pq1.poll();
		System.out.println(pq1);

	}

}
