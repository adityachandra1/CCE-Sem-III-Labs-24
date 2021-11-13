package check_palindrome;

import java.util.*;

public class Check_palindrome {

    public static void main(String[] args) {
        int num;
        int rev = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        num = sc.nextInt();
        int temp = num;
        while(temp > 0){
            rev += temp%10;
            temp /= 10;
            rev *= 10;
        }
        rev /= 10;
        if(num == rev) System.out.println("YES");
        else System.out.println("NO " + rev);
    }

}
