import java.util.*;

public class A1P2 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter Two Numbers");

        int num1 = s.nextInt();
        int num2 = s.nextInt();

        float divide = num1 / num2;
        System.out.println("Division is " + divide);
    }
}
