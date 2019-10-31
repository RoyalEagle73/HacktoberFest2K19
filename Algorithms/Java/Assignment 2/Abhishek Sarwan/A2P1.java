import java.util.*;

class C1 {
    int i;
}

class C2 {
    int j;
}

public class A2P1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        C1 a = new C1();
        C2 b = new C2();
        boolean x;
        System.out.println("Enter the value of i");
        a.i = s.nextInt();
        System.out.println("Enter the value of j");
        b.j = s.nextInt();
        if (a.i >= 0 && b.j >= 0)
            x = true;
        else
            x = false;
        System.out.println(x);
    }

} 

    