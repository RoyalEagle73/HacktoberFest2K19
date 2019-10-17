import java.util.*;

class A1P4 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter the 2 numbers");
        int num1 = s.nextInt();
        int num2 = s.nextInt();

        System.out.println("ADDITION = " + (num1 + num2));

        System.out.println("SUBTRACTION = " + (num1 - num2));

        System.out.println("DIVISION = " + (num1 / num2));

        System.out.println("MULTIPLICATION = " + (num1 * num2));

        System.out.println("MOD DIVISION = " + (num1 % num2));
    }
}