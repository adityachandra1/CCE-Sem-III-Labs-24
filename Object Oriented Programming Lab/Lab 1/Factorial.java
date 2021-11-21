import java.util.Scanner;
public class Factorial {
    
    static int factorial(int n){
        if(n < 2){
            return 1;
        }
        return n*factorial(n-1);
    }
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        num = sc.nextInt();
        System.out.println("Factorial of the Number is : " + factorial(num));
    }
}
