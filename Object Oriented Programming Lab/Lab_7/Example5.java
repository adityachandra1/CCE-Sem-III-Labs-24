/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Lab_7;

/**
 *
 * @author student
 */
class Example5 {

    static int i;
    static String s;

    public static void main(String args[]) //Its a Static Method
    {
        Example5 obj = new Example5();
//Non Static variables accessed using object obj
        System.out.println("i:" + obj.i);
        System.out.println("s:" + obj.s);
    }
}
