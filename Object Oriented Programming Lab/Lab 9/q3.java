import java.util.Scanner;

public class q3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a, b, c, d, e;
        String ans = null;
        System.out.println("Enter A:");
        a = sc.nextLine();
        System.out.println("Enter B:");
        b = sc.nextLine();
        System.out.println("Enter C:");
        c = sc.nextLine();
        System.out.println("Enter D:");
        d = sc.nextLine();
        System.out.println("Enter E:");
        e = sc.nextLine();
        System.out.println("Ans:");
        ans = a.concat(b);
        ans = ans.concat(c);
        ans = ans.concat(d);
        ans = ans.concat(e);
        System.out.println(ans);
    }

}