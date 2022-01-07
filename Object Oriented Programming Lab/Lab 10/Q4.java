import java.util.Scanner;

class MarksOutOfBoundsException extends Exception{
    public MarksOutOfBoundsException (String s){
        super(s);
    }
}

class Student{
    int marks;
    String name;
    
    static void validate(int num)throws MarksOutOfBoundsException{
        if(num > 100){
            throw new MarksOutOfBoundsException("Maximum marks is 100 only");
        }else{
            System.out.println("No Errors Spotted");
        }
    }
    
    Student(int m, String nm){
        name = nm;
        try{
            validate(m);
        }catch(MarksOutOfBoundsException ex){
            System.out.println(ex);
            System.out.println("Marks more than 100");
        }
        marks = m;
    }
}

public class Q4 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int marks = sc.nextInt();
        
        Student s = new Student(marks, name);
    }
}
