import java.util.*;

class A1P10 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter a Decimal Number");

        int num = s.nextInt();

        System.out.println("OCTAL EQUIVALENT OF " + num + " is = " + Integer.toOctalString(num));
    }
}
