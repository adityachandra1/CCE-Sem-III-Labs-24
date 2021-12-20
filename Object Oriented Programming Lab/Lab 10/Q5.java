/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab_10;
import java.io.File;

/**
 *
 * @author student
 */
public class Q5 {
    public static void main(String args[]){
        String currDirPath = "C:\\Users\\student\\Downloads\\CCE-Sem-III-Labs-24-main\\CCE-Sem-III-Labs-24-main\\Object Oriented Programming Lab\\Lab_10\\src\\lab_10";
        File currDir = new File(currDirPath);
        if (currDir.exists() && currDir.isDirectory()) {
              
              // array for files and sub-directories
            // of directory pointed by maindir
            File arr[] = currDir.listFiles();
  
            System.out.println(
                "**********************************************");
            System.out.println(
                "Files from current directory : " + currDir);
            System.out.println(
                "**********************************************");
            int i = arr.length-1;
            while(i > 0){
                System.out.println(arr[i].getName());
                i--;
            }
        }
    }
}
