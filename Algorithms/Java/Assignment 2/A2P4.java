import java.util.Scanner;

public class A2P4 {

    static boolean pallindrome(int x) {
        int y = x;
        int num = 0, rem;

        while (x > 0) {
            rem = x % 10;
            num = (int) (num * 10 + rem);
            x /= 10;
        }

        if (y == num)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();

        System.out.println(pallindrome(x));
    }

}