import java.util.*;

class A1P11 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter a Number");
        int num = s.nextInt();

        int sum = 0, rem;

        while (num > 0) {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }

        System.out.println("SUM OF DIGITS  = " + sum);
    }
}