class Q4 extends Thread {
    public void run() {
        System.out.println("Thread Running...");
    }

    public static void main(String[] args) {
        Q4 p1 = new Q4();
        p1.start();
        System.out.println("max thread priority : " + p1.MAX_PRIORITY);
        System.out.println("min thread priority : " + p1.MIN_PRIORITY);
        System.out.println("normal thread priority : " + p1.NORM_PRIORITY);

    }
}
