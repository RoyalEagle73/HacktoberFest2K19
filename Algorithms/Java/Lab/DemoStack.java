import java.lang.*;
import java.util.*;

class Stack {
    int n;
    int top;
    int stack[];
    Scanner s = new Scanner(System.in);

    Stack() {
        top = -1;
        n = s.nextInt();
        stack = new int[n];
    }

    Stack(int n) {
        top = -1;
        stack = new int[n];
    }

    synchronized boolean isEmpty() {
        return (top == -1);
    }

    synchronized boolean isFull() {
        return (top == n - 1);
    }

    void push(int x) {
        if (isFull()) {
            System.out.println("Full Stack");
            return;
        }
        stack[++top] = x;
    }

    int pop() {
        if (isEmpty()) {
            System.out.println("Stack is Empty");
            return 0;
        }
        return stack[top--];
    }
}

public class DemoStack {

    public static void main(String[] args) throws Exception {

        Stack st = new Stack(6);
        // Scanner s= new Scanner(System.in);
        // System.out.println("Hello");
        Runnable t1 = () -> {
            int i = 0;
            st.push(i++);
            System.out.println(i + " is pushed.");
        };

        Runnable t2 = () -> {
            if (!st.isEmpty()) {
                System.out.println(st.pop() + " is popped.");
            }
        };

        Thread T1 = new Thread(t1);
        Thread T2 = new Thread(t2);

        T1.start();
        T1.sleep(1000);
        T2.start();
        T2.sleep(1000);
        T1.join();
        T2.join();

        while (!st.isEmpty()) {
            System.out.println(st.pop() + " popped after threads");
        }
    }
}