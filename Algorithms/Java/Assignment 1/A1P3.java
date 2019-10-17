import java.util.*;

class A1P3 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter 6 numbers for given expression");
        System.out.println("EXPRESSION IS =  num1  +  num2 / num3 * num4 - num5 % num6");
        int num1 = s.nextInt();
        int num2 = s.nextInt();
        int num3 = s.nextInt();
        int num4 = s.nextInt();
        int num5 = s.nextInt();
        int num6 = s.nextInt();

        int sol = num1 + num2 / num3 * num4 - num5 % num6;
        System.out.println("And the value of expression is " + sol);
    }
}