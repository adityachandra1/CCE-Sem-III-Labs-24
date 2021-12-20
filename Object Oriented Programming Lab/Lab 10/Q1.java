/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
import java.util.Scanner;
package lab_10;

/**
 *
 * @author student
 */
public class Q1 {
    public static void input(){
        Scanner sc = new Scanner(System.in);
        int n = 0;
        int sum = 0;
        while(n != -1){
            sum += n;
            System.out.println(sum);
            n = sc.nextInt();
        }
        
    }
    public static void main(String args[]){
       
       
        
        
    }
}
