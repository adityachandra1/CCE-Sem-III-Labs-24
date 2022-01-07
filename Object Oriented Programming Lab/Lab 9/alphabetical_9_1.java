/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;

public class alphabetical_9_1 {
    
    static void arrange(String arr[], int n){
        for(int j = 0; j < n; j++){
            for(int i = 0 ; i < n-1; i++){
                if(arr[j].compareTo(arr[i+1]) > 0){
                String temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                }
            }
        }
    }
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of Array");
        int n = sc.nextInt();
        String arr[] = new String[n];
        System.out.println("Enter the Strings in the Array");
        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextLine();
        }
        System.out.println("The Array in arranged form is : ");
        arrange(arr,6);
         for(int i = 0 ; i < n ; i++){
            System.out.println(arr[i]);
        }
        
        
    }
}
