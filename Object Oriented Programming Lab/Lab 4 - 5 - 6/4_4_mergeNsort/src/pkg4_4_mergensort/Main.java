/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg4_4_mergensort;

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
        int arr1 [] = new int [100];
        int arr2 [] = new int [100];
        Scanner sc = new Scanner(System.in);
        int m , n;
        System.out.println("Enter the number of elements in the array 1: ");
        m = sc.nextInt();
        System.out.println("Enter the elements in the array 1");
        for(int i = 0 ; i < m; i++){
             arr1[i] = sc.nextInt();
        }
        System.out.println("Enter the number of elements in the array 2: ");
        n = sc.nextInt();
        System.out.println("Enter the elements in the array 2:");
        for(int i = 0 ; i < n; i++){
             arr2[i] = sc.nextInt();
        }
        
        int arr3 [] = new int[m+n];
        for(int i = 0 ; i < m ; i++){
            arr3[i] = arr1[i];
        }
        for(int i = m ; i < m+n ; i++){
            arr3[i] = arr2[i-m];
        }
        
        for(int i = 0 ; i < m+n; i++){
            for(int j = 0 ; j < m+n-1; j++){
                if(arr3[j+1] < arr3[j]){
                    int temp = arr3[j];
                    arr3[j] = arr3[j+1];
                    arr3[j+1] = temp;
                }
            }
        }
        System.out.println("Merged and Sorted array 3:");
        for(int i = 0 ; i < (m+n); i++){
            System.out.println(arr3[i]);
        }
    }
    
}
