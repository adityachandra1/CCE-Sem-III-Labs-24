import java.util.Scanner;

public class q5{

    public static void main(String[] args) 
   {
        System.out.println("Enter a five letter word: ");

        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        for (int i = 0; i < input.length(); i++) 
       {
            for (int j = 0; j < input.length(); j++) 
           {
                for (int k = 0; k < input.length(); k++) 
               {
                    if (i == j || i == k || j == k)
                        continue;
                    char word[] = new char[3];
                    word[0] = input.charAt(i);
                    word[1] = input.charAt(j);
                    word[2] = input.charAt(k);
                    String string = new String(word);
                    System.out.println(string);
                }
            }
        }
    }
}