/*
   Creating Threads using Runnable interface
*/

class Thread2 implements Runnable {
    public void run() {
        System.out.println("Thread is running..."); 
    }
    public static void main(String args[]) {
        Thread2 m1 = new Thread2();
        Thread t1 = new Thread(m1); // using the constructor Thread(Runnable r)
        t1.start();
    }
}
