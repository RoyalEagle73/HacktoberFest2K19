import java.util.*;

public class A2P5 {

    public static void main(String args[]) {

        Scanner s = new Scanner(System.in);
        int n, flag=1;
        boolean res;
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


        for(int i = 0; i < n - 2; i++)
        {
            if(a[i]==b[0])
                if(a[i+1]==b[1])
                    if(a[i+2]==b[2])
                    {
                        flag=0;
                        break;
                    }
        }
        
        if (flag == 1)
            res= false;
        else
            res= true;

        System.out.println(res);

    }
}