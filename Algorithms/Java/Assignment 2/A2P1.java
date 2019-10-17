import java.util.Scanner;

class C1 {
    private int i;
    Scanner s = new Scanner(System.in);

    void set_i() {
        i = s.nextInt();
    }

    int get_i() {
        return i;
    }
}

class C2 {
    private int j;
    Scanner s = new Scanner(System.in);

    void set_j() {
        j = s.nextInt();
    }

    int get_j() {
        return j;
    }
}

public class A2P1 {

    static boolean compare() {
        C1 a = new C1();
        C2 b = new C2();
        boolean x;

        a.set_i();
        b.set_j();

        if (a.get_i() >= 0 && b.get_j() >= 0)
            x = true;
        else
            x = false;

        return x;
    }

    public static void main(String[] args) {

        System.out.println(compare());
    }
}
