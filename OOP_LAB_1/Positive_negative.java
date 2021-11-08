package positive_negative;

import java.util.Scanner;

public class Positive_negative {

    public static void main(String[] args) {
        int num;
        int pos = 0 , neg = 0 , zero = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 10 Numbers");
        for(int i = 0 ; i < 10 ; i++){
            num = sc.nextInt();
            if(num < 0) neg ++;
            if(num == 0) zero++;
            if(num > 0) pos++;
        }
        System.out.println("Total Positive Integers = " + pos);
        System.out.println("Total Negative Integers = " + neg);
        System.out.println("Total Zero Integers = " + zero);
        
    }

}
