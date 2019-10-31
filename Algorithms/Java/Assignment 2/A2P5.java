import java.util.Scanner;

public class A2P5 {

    static boolean ret(int a[], int b[], int n) {
        int flag = 1;
        for (int i = 0; i < n - 2; i++) {
            int j, k;
            for (k = i, j = 0; j < 3 && a[k] == b[j]; j++, k++) {

            }
            if (j == 3) {
                flag = 0;
                break;
            }

            if (flag == 0) {
                break;
            }
        }

        if (flag == 1)
            return false;
        else
            return true;
    }

    public static void main(String args[]) {

        Scanner s = new Scanner(System.in);
        int n;
        System.out.println("Enter the number of terms in the array");
        n = s.nextInt();

        int a[] = new int[n];
        int b[] = new int[3];

        System.out.println("Enter the 1st array");
        for (int i = 0; i < n; i++)
            a[i] = s.nextInt();

        System.out.println("Enter the array to check the order");
        for (int i = 0; i < 3; i++)
            b[i] = s.nextInt();

        System.out.println(ret(a, b, n));

    }
}