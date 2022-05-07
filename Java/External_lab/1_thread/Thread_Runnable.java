public class Thread_Runnable implements Runnable {
    public void run() {
        System.out.printf("Using Runnable interface\n");
    }
    public static void main(String args[]) {
        Thread_Runnable t = new Thread_Runnable();
        Thread t1 = new Thread(t);
        t1.start();
    }
}
