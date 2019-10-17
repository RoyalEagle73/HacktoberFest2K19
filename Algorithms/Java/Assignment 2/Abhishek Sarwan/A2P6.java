import java.util.*;

public class A2P6 {
    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the number");
        x = s.nextInt();

        int y = x;
        int num = 0, rem;

        while (x > 0) {
            rem = x % 10;
            num += rem;
            x /= 10;
        }

        System.out.println(num);
    }

}