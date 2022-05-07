public class thread extends Thread{
    public void run() {
        System.out.printf("hi\n");
    }
    public static void main(String args[]) {
        thread t1 = new thread();
        t1.start();
    }
}
