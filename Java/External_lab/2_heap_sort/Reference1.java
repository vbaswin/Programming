import java.io.*;

class Demo {
    int x = 10;
    int display() {
        System.out.println("x = " + x);
        return 0;
    }
}

class Reference1 {
    public static void main(String[] args) {
        Demo D1 = new Demo();
        System.out.println(D1);
        System.out.println(D1.display());
    }
}
