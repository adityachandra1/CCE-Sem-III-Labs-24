/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.pkg11;

/**
 *
 * @author student
 */
public class Q5{

    public static void main(String args[]) {
        try {
            for (int j = 0; j < 5; j++) {
                Thread.sleep(1000);
                System.out.println(j);
            }
        } catch (Exception expn) {
            System.out.println(expn);
        }

    }
}
