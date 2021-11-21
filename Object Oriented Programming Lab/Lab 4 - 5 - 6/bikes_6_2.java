class Bike {
    int speedlimit = 120;

    void run(){
        System.out.println("Vroom Vroom Vrooo!!");
    }
}

class Splendor extends Bike {
    int speedlimit = 70;

    void run (){
        System.out.println("Splendor goes Vrooooooooom!");
    }
}

public class bikes_6_2{
    public static void main(String args[]){
        Bike bike1 = new Bike();
        Splendor bike2 = new Splendor();  
        
        bike2.run();
        bike1.run();
    }
}

