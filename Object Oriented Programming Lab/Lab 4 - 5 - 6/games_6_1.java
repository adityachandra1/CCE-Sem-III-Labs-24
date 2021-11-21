class Game{
    void type(){
        System.out.println("indoor & outdoor games");
    }
}

class cricket extends Game{
    void type(){
        System.out.println("cricket is an outdoor game");
    }
}

class chess extends Game{
    void type(){
        System.out.println("chess is an indoor game");
    }
}

public class games_6_1{
    public static void main(String args[]){
        Game Hockey = new Game();
        chess Chess = new chess();
        cricket Cricket = new cricket();

        Hockey.type();
        Chess.type();
        Cricket.type();
    }
}