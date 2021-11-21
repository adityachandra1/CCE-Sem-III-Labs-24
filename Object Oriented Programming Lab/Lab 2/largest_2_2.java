import java.util.Scanner;

public class largest_2_2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 3 numbers a, b, c");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int smallest = c < (a < b ? a : b) ? c : ((a < b) ? a : b);
        System.out.println("The smallest number is: " + smallest);
        int largest = c > (a > b ? a : b) ? c : ((a > b) ? a : b);
        System.out.println("The smallest number is: " + largest);
    }
}
