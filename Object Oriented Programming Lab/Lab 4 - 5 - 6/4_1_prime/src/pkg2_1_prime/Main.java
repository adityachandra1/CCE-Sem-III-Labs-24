/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg2_1_prime;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    static boolean isPrime(int x){
        if(x == 1) return false;
        for(int i = 2 ; i < x ; i++){
            if(x%i == 0) return false;
        }
        return true;
    }
    public static void main(String args[]){
        int arr [] = new int [10];
        Scanner sc = new Scanner(System.in);
        int k ;
        System.out.println("Enter the number of elements in the array");
        k = sc.nextInt();
        System.out.println("Enter the elements in the array");
        for(int i = 0 ; i < k ; i++){
             arr[i] = sc.nextInt();
        }
        System.out.println("The prime numbers are : ");
        for(int i = 0 ; i < 10 ; i++){
            if(isPrime(arr[i]) == true){
                System.out.println(arr[i]);
            }
        }
    }
    
}
