import java.util.Scanner;

class Input_Exception extends Exception {
    String msg;

    public Input_Exception(float f) {
        msg = "Invalid input exception: Float entered (\'" + f + "\')";
    }

    public String toString() {
        return msg;
    }
}

public class Q1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i = 0;
        int sum = 0;
        do {
            System.out.println("Enter numbers");
            try {
                String num = sc.next();
                if (num.contains(".")) {
                    Input_Exception ie = new Input_Exception(Float.valueOf(num));
                    throw ie;
                }
                i = Integer.valueOf(num);
                if (i != -1)
                    sum += i;
            } catch (Input_Exception ie) {
                System.out.println(ie);
            }
        } while (i != -1);
        System.out.println("Sum of all numbers: " + sum);
    }
}