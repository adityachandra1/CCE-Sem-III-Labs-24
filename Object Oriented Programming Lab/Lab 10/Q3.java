
import java.util.Scanner;

class EvenNumberException extends Exception{
    public EvenNumberException (String s){
        super(s);
    }
}

public class Q3 {
    
     static void validate(int num)throws EvenNumberException{
        if(num%2 == 0){
            throw new EvenNumberException("number not valid");
        }else{
            System.out.println("No Errors Spotted");
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter an odd number: ");
        int num = sc.nextInt();
        try{
            validate(num);
        }catch(EvenNumberException ex){
            System.out.println("Caught Exception: Even number found!");
        }
    }
}
