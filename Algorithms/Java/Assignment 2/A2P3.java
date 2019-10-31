import java.util.Scanner;

public class A2P3 {

    static boolean teen(int x) {

        x %= 100;

        if (x <= 19 && x >= 13)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        int x;
        Scanner s = new Scanner(System.in);

        x = s.nextInt();

        System.out.println(teen(x));
    }

}