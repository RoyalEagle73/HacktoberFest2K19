import java.util.*;

class A1P12 {
    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter the coordinates of First Point ");

        int x1 = s.nextInt();
        int y1 = s.nextInt();

        System.out.println("ennter the coordinates of Second Point");
        int x2 = s.nextInt();
        int y2 = s.nextInt();

        double dis = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

        System.out.println("Distance Between " + "(" + x1 + "," + y1 + ") and " + "(" + x2 + "," + y2 + ") is " + dis);
    }
}