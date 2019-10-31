import java.util.*;

public class A1P9 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the 2 numbers to swap");
        int num1;
        int num2;

        num1 = s.nextInt();
        num2 = s.nextInt();

        int num3;

        System.out.println("Numbers before swapping are:");
        System.out.println("Num1 = " + num1);
        System.out.println("Num2 = " + num2);

        // Swapping Numbers Below
        num3 = num1;
        num1 = num2;
        num2 = num3;

        System.out.println("\nNumbers before swapping are:");
        System.out.println("Num1 = " + num1);
        System.out.println("Num2 = " + num2);
    }
}