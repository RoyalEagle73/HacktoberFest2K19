import java.util.*;

public class A1P15 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the number");
        int num = s.nextInt();

        if (Math.abs(num - 100) <= 10)
            System.out.println("True");
        else
            System.out.println("False");
    }
}