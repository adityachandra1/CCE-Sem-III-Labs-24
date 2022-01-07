
import java.util.Scanner;

class AdityasThread implements Runnable {

    public void run() {
        try {
            System.out.println("Name:" + Thread.currentThread().getName());
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class Q3 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Name the Thread: ");
        String x = sc.nextLine();
        AdityasThread p = new AdityasThread();
        Thread t = new Thread(p);
        t.setName(x);
        t.start();
    }
}