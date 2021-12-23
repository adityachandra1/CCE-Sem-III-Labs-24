/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author student
 */
class Example2 {

    int num;
//Static class

    static class X {

        static String str = "Inside Class X";
        num  = 99;
    }

    public static void main(String args[]) {
        Example2.X obj = new Example2.X();
        System.out.println("Value of num=" + obj.str);
    }
}
