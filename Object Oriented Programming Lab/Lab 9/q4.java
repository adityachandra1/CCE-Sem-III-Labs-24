import java.util.Scanner;

public class q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input;
        char[] areaCode = new char[3];
        char[] lastFour = new char[4];
        char[] lastSeven = new char[7];
        System.out.println("Enter your phone number: ");
        input = sc.next();
        for (int i = 0; i < input.length(); i++) {
            if (i < 3) {
                areaCode[i] = input.charAt(i);
            }
            if (i > 5 && i < input.length()) {
                lastFour[i - 6] = input.charAt(i);
            }
            if (i > 2 && i < input.length()) {
                lastSeven[i - 3] = input.charAt(i);
            }

        }

        System.out.print("Area Code: ");
        for (int i = 0; i < 3; i++) {
            System.out.print(areaCode[i]);
        }
        System.out.print("\nLast four Digit: ");
        for (int i = 0; i < 4; i++) {
            System.out.print(lastFour[i]);
        }
        System.out.print("\nLast Seven Digit: ");
        for (int i = 0; i < 7; i++) {
            System.out.print(lastSeven[i]);
        }
        System.out.println("");
    }
}