import java.util.*;

class A1P8 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the value of the 3 Numbers");
        int num1 = s.nextInt();
        int num2 = s.nextInt();
        int num3 = s.nextInt();

        System.out.println("SUM = " + (num1 + num2 + num3));
        System.out.println("AVERAGE = " + ((num1 + num2 + num3) / 3));
    }
}