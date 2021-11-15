/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg2_2_smallest_largest;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int arr [] = new int [100];
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter Number of elements in the array");
        n = sc.nextInt();
        System.out.println("Enter the elements in the array");
        int largest = -9999999, smallest = 1000000;
        for(int i = 0 ; i < n ; i++){
             arr[i] = sc.nextInt();
             if(arr[i] > largest) largest = arr[i];
             if(arr[i] < smallest) smallest = arr[i];
        }
        System.out.println("The largest number is " + largest);
        System.out.println("The smallest number is "+ smallest);
    }
    
}
