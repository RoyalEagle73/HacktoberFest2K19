import java.util.*;

public class A2P2 {

    public static void main(String[] args) {
        int x;
        boolean res;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the number");
          x = s.nextInt();
        if (Math.abs(x - 100) <= 10 || Math.abs(x - 1000) <= 10)
            res= true;
        else
            res= false;
        System.out.println(res);
    }
}