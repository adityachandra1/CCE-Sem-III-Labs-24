import java.util.Scanner;

class Result{
    int[][] marks = new int[4][4];
    int[] total = new int[4];

    void input() {
        Scanner sc = new Scanner(System.in);
        for (int i = 1; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                System.out.println("Input marks of Roll Number " + i + " in Subject " + j);
                marks[i][j] = sc.nextInt();
            }
        }
    }

    void total() {
        for (int i = 1; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                total[i] += marks[i][j];
            }
        }
    }

    void subjectTopper() {
        int maxMarks = -100;
        int topperRoll = -1;
        for (int i = 1; i < 4; i++) {
            maxMarks = -100;
            for (int j = 1; j < 4; j++) {
                if (marks[j][i] > maxMarks) {
                    maxMarks = marks[j][i];
                    topperRoll = j;
                }
            }
            System.out.println("Student with Roll No " + topperRoll + " scored the Maximum Marks in Subject " + i
                    + " with " + maxMarks + " marks");
        }
    }
    
    void overallTopper() {
        int maxMarks = -100;
        int topperRoll = -1;
        for (int i = 1; i < 4; i++) {
            if (maxMarks < total[i]) {
                topperRoll = i;
                maxMarks = total[i];
            }
        }
        System.out.println("Roll Number " + topperRoll + " has topped the exam with a total of " + maxMarks);
    }
};

public class result_5_1 {
    public static void main(String args[]) {
        Result res = new Result();
        res.input();
        res.total();
        res.subjectTopper();
        res.overallTopper();
    }
}
