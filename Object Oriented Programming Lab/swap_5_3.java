import java.util.Scanner;

class Integer {
    int value;

    public Integer(int value) {
        this.value = value;
    }
}

public class swap_5_3 {
    //by value
    public static void swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;

        System.out.println("a = " + a + ", b = " + b);
    }

    //by reference
    public static void swap(Integer a, Integer b) {
        Integer c = new Integer(a.value);
        a.value = b.value;
        b.value = c.value;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Before Swap " + a + " " + b);
        swap(a, b);
        Integer a1 = new Integer(a);
        Integer b1 = new Integer(b);
        swap(a1, b1);
        System.out.println("After Swap " + a1.value + " " + b1.value);
    }
}
