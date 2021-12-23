
import java.util.Scanner;
/**
 *
 * @author student
 */

abstract class shape{
    abstract int area ();
}

class Square extends shape{
    int side1;
    Square(int a){
        side1 = a;
    }
    int area (){
        return side1*side1;
    }
}

class Triangle extends shape{
    int b, h ;
    Triangle(int a1, int a2){
        b = a1;
        h = a2;
    }
    int area (){
        return b * h/2;
    }
}

public class area_8_1 {
    public static void main(String args[]){
        shape sq, tri;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 for Area of Square, 2 for Area of Triangle");
        int opt = sc.nextInt();
        if(opt == 1){
            System.out.println("Enter Side of Square");
            int s = sc.nextInt();
            sq = new Square(s);
            System.out.println("Square Area: " + sq.area() );
        }else if(opt == 2){
            System.out.println("Enter Base of Triangle");
            int base = sc.nextInt();
            System.out.println("Enter Height of Triangle");
            int height = sc.nextInt();
            tri = new Triangle(base, height);
            System.out.println("Triangle Area: " + tri.area() );
        }
    }  
}
