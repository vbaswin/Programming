public class Thread3 extends Thread{
    public void run() {
        System.out.printf("Thread3\n");
    }
    public static void main(String args[]) {
        thread t1 = new thread();
        Thread_Runnable m = new Thread_Runnable();
        Thread t2 = new Thread(m);
        Thread3 t3 = new Thread3();
        t1.start();
        t2.start();
        t3.start();
    }
}
