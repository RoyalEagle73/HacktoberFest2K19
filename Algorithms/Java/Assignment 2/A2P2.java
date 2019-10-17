import java.util.Scanner;

public class A2P2 {

    static boolean compare(int x) {
        if (Math.abs(x - 100) <= 10 || Math.abs(x - 1000) <= 10)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();

        System.out.println(compare(x));
    }
}