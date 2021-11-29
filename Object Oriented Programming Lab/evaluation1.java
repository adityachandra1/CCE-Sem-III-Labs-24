import java.util.Scanner;

class student {
    int roll;
    String name;
    String dept;
    public int grade;
};

class sports extends student {
    public boolean indoor = false, outdoor = false;

    void input() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name");
        name = sc.nextLine();

        System.out.println("Enter Roll");
        roll = sc.nextInt();

        System.out.println("Department? :");
        dept = sc.nextLine();

        System.out.println("Grade (1-10)? : ");
        grade = sc.nextInt();

        System.out.println("Indoor? (true/false): ");
        indoor = sc.nextBoolean();

        System.out.println("Outdoor? (true/false): ");
        outdoor = sc.nextBoolean();
    }

    void display(sports s[], int n) {
        System.out.println("Roll : " + roll);
        System.out.println("Name :" + name);
        System.out.println("Department : " + dept);
        System.out.println("Grade : " + grade);
        if (indoor) {
            System.out.println("Indoor : " + indoor);
        }
        if (outdoor) {
            System.out.println("Outdoor : " + outdoor);
        }
        System.out.println(" ");
    }
};

public class evaluation1 {

    static void swap_1_3(sports s[]) {
        // 1 - 3;
        sports temp = new sports();
        temp = s[0];
        s[0] = s[2];
        s[2] = temp;
    }

    //sorting in descending order
    static void sort(sports s[], int n) {
        int idx;
        for (int i = 0; i < n - 1; i++) {
            idx = i;
            for (int j = i + 1; j < n; j++) {
                if (s[j].grade > s[idx].grade) {
                    sports temp = new sports();
                    temp = s[idx];
                    s[idx] = s[j];
                    s[j] = temp;
                }
            }
        }
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of students");
        int n = sc.nextInt();
        sports s[] = new sports[n];

        for (int i = 0; i < n; i++) {
            s[i] = new sports();
            s[i].input();
        }
        System.out.println(" ");
        System.out.println("Before Swap");
        for (int i = 0; i < n; i++) {
            s[i].display(s, n);
        }
        System.out.println(" ");
        swap_1_3(s);
        System.out.println("After Swap");
        for (int i = 0; i < n; i++) {
            s[i].display(s, n);
        }
        System.out.println(" ");
        sort(s, n);
        System.out.println("After Sort");
        for (int i = 0; i < n; i++) {
            s[i].display(s, n);
        }
    }
}
