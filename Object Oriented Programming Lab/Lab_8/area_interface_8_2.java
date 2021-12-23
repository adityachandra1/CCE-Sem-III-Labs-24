import java.util.Scanner;
/**
 *
 * @author student
 */

interface Shape{
    int area();
}

class square implements Shape{
    int side1;
    square(int a){
        side1 = a;
    }
    public int area (){
        return side1*side1;
    }
}

class triangle implements Shape{
    int b, h ;
    triangle(int a1, int a2){
        b = a1;
        h = a2;
    }
    public int area (){
        return b * h/2;
    }
}

public class area_interface_8_2 {
    public static void main(String args[]){
        Shape sq, tri;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1 for Area of Square, 2 for Area of Triangle");
        int opt = sc.nextInt();
        if(opt == 1){
            System.out.println("Enter Side of Square");
            int s = sc.nextInt();
            sq = new square(s);
            System.out.println("Square Area: " + sq.area() );
        }else if(opt == 2){
            System.out.println("Enter Base of Triangle");
            int base = sc.nextInt();
            System.out.println("Enter Height of Triangle");
            int height = sc.nextInt();
            tri = new triangle(base, height);
            System.out.println("Triangle Area: " + tri.area() );
        }
    }  
}
