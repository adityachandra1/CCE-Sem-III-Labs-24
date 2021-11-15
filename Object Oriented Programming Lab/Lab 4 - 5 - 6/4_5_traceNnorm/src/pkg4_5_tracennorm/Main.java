/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg4_5_tracennorm;

import java.util.Scanner;

/**
 *
 * @author student
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static double squareRoot(int num) {
        double t;
        double sqrtroot = num / 2;
        do {
            t = sqrtroot;
            sqrtroot = (t + (num / t)) / 2;
        } while ((t - sqrtroot) != 0);
        return sqrtroot;
    }

    public static void main(String[] args) {
        int mat[][] = new int[100][100];
        int n, m;
        Scanner sc = new Scanner(System.in);
        int k;
        System.out.println("Enter the number of rows and columns in the array");
        n = sc.nextInt();
        System.out.println("Enter the elements in the array");
        int trace = 0;
        int norm = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = sc.nextInt();
                if (i == j) {
                    trace += mat[i][j];
                }
                norm += mat[i][j] * mat[i][j];
            }
        }
        System.out.println("Trace of Matrix : " + trace);
        System.out.println("Norm of Matrix : " + squareRoot(norm));
    }

}
