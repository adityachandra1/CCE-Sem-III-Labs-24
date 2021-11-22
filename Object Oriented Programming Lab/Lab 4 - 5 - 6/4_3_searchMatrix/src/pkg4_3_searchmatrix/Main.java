/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg4_3_searchmatrix;

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
       int mat [][] = new int [100][100];
       int n , m;
       Scanner sc = new Scanner(System.in);
        int k ;
        System.out.println("Enter the number of rows and columns in the array");
        n = sc.nextInt();
        m = sc.nextInt();
        System.out.println("Enter the elements in the array");
        for(int i = 0 ; i < n ; i++){
             for(int j = 0 ; j < m ; j++){
                 mat[i][j] = sc.nextInt();
             }
        }
        System.out.println("Enter Key to be searched");
        int key;
        key = sc.nextInt();
        int flag = 0, count = 0;
        for(int i = 0 ; i < n ; i++){
             for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == key){
                    System.out.println("Key Found at "+ (i+1) + "," + (j+1));
                    flag = 1;
                    count++;
                }
             }
        }
        if(flag == 0){
            System.out.println("Key Not Found");
        }else{
            System.out.println("Occurences : " + count);
        }
        
    }
    
}
