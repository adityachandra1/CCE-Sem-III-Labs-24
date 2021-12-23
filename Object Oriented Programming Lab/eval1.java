class student {
    int roll;
    String name;
    String dept;
    int grade;
};

class sports extends student {
    boolean indoor = false, outdoor = false;

    void display(sports s[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.println(roll);
            System.out.println("Name :" + name);
            System.out.println("Department : " + dept);
            System.out.println("Grade : " + grade);
            if (indoor) {
                System.out.println("Indoor : " + indoor);
            }
            if (outdoor) {
                System.out.println("Outdoor : " + outdoor);
            }
        }
    }
};

    void swap(sports s[]) {
        // 1 - 3;
        sports temp = new sports();
        temp = s[0];
        s[0] = s[2];
        s[2] = temp;
    }

public class eval1 {
    public static void main(String args[]){

    }
}
