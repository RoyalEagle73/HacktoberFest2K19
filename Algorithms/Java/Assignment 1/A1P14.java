import java.util.*;

public class A1P14 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the number");
        int num = s.nextInt();

        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                count++;
        }

        System.out.println("The number of factors of " + num + " is: " + count);
    }
}