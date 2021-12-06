
package eval_2;

abstract class ICT{
    int courseID, RegNo, salary;
    String company;
    abstract void placement(int avg, String s);
}

class cce extends ICT{
    String courseName, name;
    cce(int ID, String nm, int reg, String cname, int pkg, String cmp){
        courseID = ID;
        courseName = cname;
        RegNo = reg;
        name = nm;
        salary = pkg;
        company = cmp;
    }
    void placement(int avg, String s){
        if(salary > avg){
        System.out.println("Name: " + name);
        System.out.println("RegNo: " + RegNo);
        System.out.println("Course name: " + courseName);
        System.out.println("CourseID: " + courseID);
        System.out.println("Salary :" + salary + " lpa");
        System.out.println("Company : " + company);
        System.out.println(" ");
        }
    }
}
class it extends ICT{
   String courseName, name;
    it(int ID, String nm, int reg, String cname, int pkg, String cmp){
        courseID = ID;
        courseName = cname;
        RegNo = reg;
        name = nm;
        salary = pkg;
        company = cmp;
    }
    void placement(int pkg, String s){
        if(company == "Microsoft"){
        System.out.println("Name: " + name);
        System.out.println("RegNo: " + RegNo);
        System.out.println("Course name: " + courseName);
        System.out.println("CourseID: " + courseID);
        System.out.println("Salary :" + salary + " lpa");
        System.out.println("Company : " + company);
        System.out.println(" ");
        }
    }
}

public class Eval_2 {
    public static void main(String[] args) {
        
  
        cce cc1 = new cce(12344, "Aditya", 20043, "OOP", 15, "Microsoft");
        cce cc2 = new cce(12354, "Anurag", 20044, "DSA", 10, "Google");
        cce cc3 = new cce(12374, "Praveen", 20045, "DSA", 20, "Amazon");
        cce cc4 = new cce(12384, "Rishit", 20046, "OOP", 35, "Microsoft");
        cce cc5 = new cce(12394, "Satyam", 20047, "DSA", 16, "Microsoft");
         
        int ccavg = (cc1.salary + cc2.salary + cc3.salary + cc4.salary + cc5.salary)/5;
        
        System.out.println("Average of CCE = " + ccavg + " lpa");
        System.out.println(" ");
        cc1.placement(ccavg, "");
        cc2.placement(ccavg, "");
        cc3.placement(ccavg, "");
        cc4.placement(ccavg, "");
        cc5.placement(ccavg, "");
        
        System.out.println(" ");
        System.out.println(" ");
        System.out.println(" ");
        
        
        System.out.println("IT Students in Microsoft");
        System.out.println(" ");
        
        it it1 = new it(12344, "Rohan", 20043, "OOP", 15, "Microsoft");
        it it2 = new it(12354, "Anurag", 20044, "DSA", 10, "Google");
        it it3 = new it(12374, "Hemant", 20045, "DSA", 20, "Amazon");
        it it4 = new it(12384, "Anish", 20046, "OOP", 35, "Microsoft");
        it it5 = new it(12394, "Aryan", 20047, "DSA", 16, "Microsoft");
          
        it1.placement(0, "Microsoft");
        it2.placement(0, "Microsoft");
        it3.placement(0, "Microsoft");
        it4.placement(0, "Microsoft");
        it5.placement(0, "Microsoft");
          
    }
    
}
