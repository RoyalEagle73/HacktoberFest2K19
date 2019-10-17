import java.util.*;

class A1P7 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the length of the rectangle");
        int length = s.nextInt();

        System.out.println("enter the breadth of recatngle");
        int breadth = s.nextInt();

        System.out.println("AREA OF RECTANGLE = " + (length * breadth));

        System.out.println("PERIMETER OF RECTANGLE = " + (2 * (length + breadth)));
    }
}