class Fibonacci {
    synchronized public int fibonacci(int n) {
        int f[] = new int[n + 2];
        int i;

        f[0] = 0;
        f[1] = 1;

        for (i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
            System.out.print(f[i] + " ");
        }
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        return f[n];
    }
}

class Prime {
    synchronized public boolean isPrime(int n) {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }

    synchronized public void printPrime(int n) {
        for (int i = 2; i <= n; i++) {
            if (isPrime(i))
                System.out.print(i + " ");
        }
        try{
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class Thread1 extends Thread {
    Fibonacci t1;

    Thread1(Fibonacci t1) {
        this.t1 = t1;
    }

    public void run() {
        System.out.println("Thread 1: Fibonacci upto 10000");
        t1.fibonacci(25);
    }
}

class Thread2 extends Thread {
    Prime t1;

    Thread2(Prime t1) {
        this.t1 = t1;
    }

    public void run() {
        System.out.println("Thread 2: Prime upto 10000");
        t1.printPrime(10000);
    }
}

public class Q6 {
    public static void main(String args[]) {
        Fibonacci fb = new Fibonacci();
        Prime pr = new Prime();
        Thread1 td1 = new Thread1(fb);
        td1.start();
        Thread2 td2 = new Thread2(pr);
        td2.start();
    }
}