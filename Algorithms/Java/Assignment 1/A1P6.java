import java.util.*;

class A1P6 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the radius of the circle");
        float r = s.nextFloat();

        double area = Math.PI * r * r;
        double perimeter = 2 * Math.PI * r;

        System.out.println("AREA = " + area);
        System.out.println("PERIMETER = " + perimeter);
    }
}