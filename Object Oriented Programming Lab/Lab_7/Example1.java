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
class Example1 {
//Static class

    static class X {

        static String str = "Inside Class X";
    }

    public static void main(String args[]) {
        X.str = "Inside Class Example1";
        System.out.println("String stored in str is- " + X.str);
    }
}
