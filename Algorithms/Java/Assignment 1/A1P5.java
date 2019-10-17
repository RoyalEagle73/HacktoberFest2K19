import java.util.*;

public class A1P5 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the number");
        int num = s.nextInt();

        for (int i = 10; i > 0; i--) {
            System.out.println(num + "*" + i + " = " + (num * i));
        }
    }
}