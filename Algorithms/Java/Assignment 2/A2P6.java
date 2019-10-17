import java.util.Scanner;

public class A2P6 {

    static int digits(int x) {
        int y = x;
        int num = 0, rem;

        while (x > 0) {
            rem = x % 10;
            num += rem;
            x /= 10;
        }

        return num;
    }

    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();

        System.out.println(digits(x));
    }

}