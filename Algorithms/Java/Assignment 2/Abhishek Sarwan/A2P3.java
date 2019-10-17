import java.util.*;

public class A2P3 {

    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);
        boolean res;
        System.out.println("Enter the number");

        x = s.nextInt();

        x %= 100;

        if (x <= 19 && x >= 13)
            res = true;
        else
            res = false;

        System.out.println(res);
    }

}