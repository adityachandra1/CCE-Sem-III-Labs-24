public class Q5 extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
            System.out.println(i);
        }
    }

    public static void main(String args[]) {
        Q5 t1 = new Q5();
        Q5 t2 = new Q5();
        t1.start();
        t2.start();
    }
}