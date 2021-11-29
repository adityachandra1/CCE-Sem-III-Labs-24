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
class Example4 {

    static int num;
    static String mystr;
//First Static block

    static {
        System.out.println("Static Block 1");
        num = 68;
        mystr = "Block1";
    }
//Second static block

    static {
        System.out.println("Static Block 2");
        num = 98;
        mystr = "Block2";
    }

    public static void main(String args[]) {
        System.out.println("Value of num=" + num);
        System.out.println("Value of mystr=" + mystr);
    }
}
