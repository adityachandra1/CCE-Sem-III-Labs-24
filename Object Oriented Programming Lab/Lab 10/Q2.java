/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab_10;
import java.util.Scanner;
/**
 *
 * @author student
 */

class NegativeArraySizeException extends Exception{
    public NegativeArraySizeException (String s){
        super(s);
    }
}

public class Q2 {
    
     static void validate(int num)throws NegativeArraySizeException{
        if(num < 0){
            throw new NegativeArraySizeException("Negative Array Size not possible");
        }else{
            System.out.println("Array Size validated");
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter size of an array ");
        int num = sc.nextInt();
        try{
            validate(num);
        }catch(NegativeArraySizeException ex){
            System.out.println("Caught Exception: Array Size is negative");
        }
        
        int array[];
        array = new int[num];
        for(int i = 0 ; i < num ; i++){
            array[i] = sc.nextInt();
        }
        for(int i = 0 ; i < num ; i++){
            System.out.print(array[i]);
        }
    }
}
