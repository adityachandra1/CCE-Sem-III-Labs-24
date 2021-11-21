import java.util.Scanner;

public class operations_2_1{
    public static void main(String args[]){
    System.out.println("Enter the numbers a and b");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    
    System.out.println("a. (a << 2) + (b >> 2) = " + (a << 2) + (b >> 2));
    System.out.println("b. (b > 0) = " + (b>0));
    System.out.println("c. (a + b * 100) / 10 = " + (a + b * 100) / 10);
    System.out.println("d. a & b = " + (a&b));
    }

}