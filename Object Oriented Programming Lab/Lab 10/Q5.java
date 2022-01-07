
import java.io.File;
public class Q5 {
    public static void main(String args[]){
        String currDirPath = "/mnt/2E02676C026737CB/Manipal-Stuff/CCE-Sem-III-Labs-24/Object Oriented Programming Lab/Lab 10";
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
