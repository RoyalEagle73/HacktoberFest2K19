import java.util.*;

public class A2P4 {
    public static void main(String[] args) {
        int x;
        boolean res;
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the number");

        x = s.nextInt();

        int y = x;
        int rev = 0, rem;

        while (x > 0) {
            rem = x % 10;
            rev = (int) (rev * 10 + rem);
            x /= 10;
        }

        if (y == rev)
            res= true;
        else
            res= false;

        System.out.println(res);
    }

}