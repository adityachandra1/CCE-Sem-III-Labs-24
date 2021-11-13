package print_table;

import java.util.*;

public class Print_table {

    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Number");
        num = sc.nextInt();
        System.out.println("Table of the Number from 1-20");
        for(int i = 1 ; i <= 20 ; i++){
            System.out.println(num + " * " + i + " = " + num*i);
        }
    }

}
