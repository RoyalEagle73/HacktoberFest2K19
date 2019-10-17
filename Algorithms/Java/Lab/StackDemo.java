
//Create a class myStack with operations push(), pop(), isEmpty(), isFull().
// members top=-1
// Use threads for each operation and check for synchronization.

import java.util.Scanner;
import java.lang.*;

class myStack {

	int top, n;
	int st[];
	Scanner s = new Scanner(System.in);

	myStack() {
		top = -1;
		n = s.nextInt();
		st = new int[n];
	}

	myStack(int x) {
		top = -1;
		n = x;
		st = new int[n];
	}

	synchronized boolean isEmpty() {
		if (top == -1)
			return true;
		else
			return false;
	}

	synchronized boolean isFull() {
		if (top == n - 1)
			return true;
		else
			return false;
	}

	synchronized void push(int x) {
		if (isFull())
			System.out.println("Full Stack");
		else {
			st[++top] = x;
		}
	}

	synchronized int pop() {
		if (isEmpty())
			return -1;

		return st[top--];
	}
}

public class StackDemo {

	public static void main(String[] args) throws Exception {
		myStack ms = new myStack(6);

		Runnable t1 = () -> {
			int i = 0;
			while (!ms.isFull()) {
				ms.push(i);
				System.out.println(i + " is pushed");
				i = i + 1;
			}
		};

		Runnable t2 = () -> {
			while (!ms.isEmpty()) {
				System.out.println(ms.pop() + " is popped");
			}
		};

		Runnable t3 = () -> {
			if (ms.isEmpty()) {
				System.out.println("Stack is empty");
			}
		};

		Runnable t4 = () -> {
			if (ms.isFull())
				System.out.println("Stack is Full");
		};

		Thread T1 = new Thread(t1);
		Thread T2 = new Thread(t2);
		Thread T3 = new Thread(t3);
		Thread T4 = new Thread(t4);
		T1.start();
		T2.start();
		T3.start();
		T4.start();
		T1.join();
		T2.join();
		T3.join();
		T4.join();

		System.out.println("Threads ended");
		if (ms.isEmpty())
			System.out.println("Stack is empty now");
		else {
			while (ms.top > -1)
				System.out.println(ms.pop() + " is popped");
		}
	}
}
