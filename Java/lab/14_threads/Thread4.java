/*
    using thread class: Thread(Runnable r, String name)
*/

class Thread4 implements Runnable {
    public void run() {
        System.out.println("thread is running..");
    }
    public static void main(String args[]) {
        Runnable r1 = new Thread4();
        Thread t1 = new Thread(r1, "New thread");
        t1.start();
        String str = t1.getName();
        System.out.println(str);
    }
}
