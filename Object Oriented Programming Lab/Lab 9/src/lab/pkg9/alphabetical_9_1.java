/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg9;
import java.util.Scanner;

public class alphabetical_9_1 {
    
    static void arrange(String arr[], int n){
        for(int j = 0; j < n; j++){
            for(int i = 0 ; i < n-1; i++){
                if(arr[i].compareTo(arr[i+1]) > 0){
                String temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                }
            }
        }
    }
    
    public static void main(String args[]){
        int n = 6;
        String arr[] = new String[n];
        Scanner sc = new Scanner(System.in);
        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextLine();
        }
        arrange(arr,6);
         for(int i = 0 ; i < n ; i++){
            System.out.println(arr[i]);
        }
        
        
    }
}
