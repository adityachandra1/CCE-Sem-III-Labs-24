/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg5_4_stack;

/**
 *
 * @author student
 */

class Stack{
    int top;
    int arr[] = new int [100];
    
    Stack(){
        top = -1;
    }
    
    public boolean isEmpty(){
        if(top == -1) return true;
        else return false;
    }
    public boolean isFull(){
        if(top == 99) return true;
        else return false;
    }
    public void push(int x){
        if(isFull()) System.out.println("Stack Overflow");
        arr[++top] = x;
    }
    public int pop(){
        if(isEmpty()) System.out.println("Stack Underflow");
        return arr[top--];
    }
    public void display(){
        if(isEmpty()) System.out.println("Empty Stack");
        for(int i = 0 ; i <= top ; i++){
            System.out.println(arr[i]);
        }
    }
}
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(1);
        s.push(3);
        s.push(5);
        s.push(6);
        s.push(10);
        System.out.println("Stack after Push");
        s.display();
        s.pop();
        s.pop();
        System.out.println("Stack after Pop");
        s.display();
    }
    
}
