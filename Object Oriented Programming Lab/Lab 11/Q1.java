import java.util.Scanner;
public class Q1 {
   

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of items to be produced");
        int n = sc.nextInt();
        System.out.println("Enter the number of items to be consumed");
        int m = sc.nextInt();
        Producer p = new Producer(n);
        Consumer c = new Consumer(m);
        Thread t1 = new Thread(p);
        Thread t2 = new Thread(c);
        t1.start();
        t2.start();
    }
}
class Producer implements Runnable {
    int n;
    Producer(int n) {
        this.n = n;
    }
    public void run() {
        for (int i = 1; i <= n; i++) {
            System.out.println("Produced " + i);
        }
    }
}
class Consumer implements Runnable {
    int m;
    Consumer(int m) {
        this.m = m;
    }
    public void run() {
        for (int i = 1; i <= m; i++) {
            System.out.println("Consumed " + i);
        }
    }
}