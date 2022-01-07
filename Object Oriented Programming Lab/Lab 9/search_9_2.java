/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;
/**
 *
 * @author student
 */
class student{
    int regNo;
    String first;
    String last;
    String degree;
    
    student(){
        Scanner sc = new Scanner(System.in);
        regNo = sc.nextInt();
        first = sc.next();
        last = sc.next();
        sc.reset();
        degree = sc.nextLine();
    }
    
    void display(){
        System.out.println(regNo);
        System.out.println(first);
        System.out.println(last);
        System.out.println(degree);
    }
}
public class search_9_2 {
      public static void main(String args[]){
        int n = 2;
        student arr[] = new student[n];
        Scanner sc = new Scanner(System.in);
        for(int i = 0 ; i < n ; i++){
            System.out.println("Enter the Details of the Student");
            arr[i] = new student();
        }
        for(int i = 0 ; i < n ; i++){
           arr[i].display();
        }
    }
}
