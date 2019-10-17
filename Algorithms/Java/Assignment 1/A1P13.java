import java.util.*;

public class A1P13 {
    public static void main(String[] args) {
        int n, k;
        Scanner s = new Scanner(System.in);

        System.out.println("Enter n and k");
        k = s.nextInt();

        n = s.nextInt();

        int i = 1;
        int val = 0;

        while (i <= n) {
            val += Math.pow(k, i++);
        }

        System.out.println("Value =" + val);
    }
}