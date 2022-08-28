package collectionFramework;

import java.util.*;

public class LearnLinkedListQueue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Queue<Integer> que = new LinkedList<>();

		que.offer(12);
		que.offer(15);
		que.offer(25);
		que.offer(77);

		System.out.println(que);

		// removing next element
		System.out.println(que.poll());

		// preview of next element
		System.out.println(que.peek());

		// que.remove(); same as que.poll but returns exception,
		// if que is empty
		System.out.println(que.poll());

		System.out.println(que);

		// que add same as que offer but can throw exception
		// if it finds error
		que.add(76);

		System.out.println(que);

		que.poll();
		que.poll();
		System.out.println(que.element());
		System.out.println(que.peek());
		que.poll();
		System.out.println(que);

		// return head of que, returns null if que is empty
		System.out.println(que.peek());

		// return head of que, THROWS AN EXCEPTION if que is empty
		System.out.println(que.element());

	}

}
