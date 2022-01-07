class Table {
    synchronized public void table(int x) {

        for (int i = 1; i <= 10; i++) {
            System.out.println(x + "*" + i + "=" + x * i);
        }
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread1 extends Thread {
    Table t1;

    Thread1(Table t1) {
        this.t1 = t1;
    }

    public void run() {
        System.out.println("Thread 1: Table of 3");
        t1.table(3);
    }

}

class Thread2 extends Thread {
    Table t1;

    Thread2(Table t1) {
        this.t1 = t1;
    }

    public void run() {
        System.out.println("Thread 2: Table of 5");
        t1.table(5);
    }

}

class Thread3 extends Thread {
    Table t1;

    Thread3(Table t1) {
        this.t1 = t1;
    }

    public void run() {
        System.out.println("Thread 3: Table of 7");
        t1.table(7);
    }

}

public class Q2 {
    public static void main(String args[]) {
        Table tp = new Table();
        Thread1 td1 = new Thread1(tp);
        td1.start();
        Thread2 td2 = new Thread2(tp);
        td2.start();
        Thread3 td3 = new Thread3(tp);
        td3.start();
    }

}