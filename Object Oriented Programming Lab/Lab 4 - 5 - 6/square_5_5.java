
public class square_5_5 {
    public static int square(int num) {
        return num * num;
    }

    public static double square(double num) {
        return num * num;
    }
    
    public static void main(String args[]) {
        System.out.println(square(3));
        System.out.printf("%.2f", square(0.2));
    }
}
