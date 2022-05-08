import java.io.*;

class Demo {
    int x = 10;
    int y = 40;

    Demo () {
        x = 20;
    }
    Demo (int i) {
        x = i;
    }
    int display() {
        System.out.println("x = " + x);
        return 0;
    }
}

class Reference2 {
    public static void main(String[] args) {
        Demo D1 = new Demo();
        System.out.println(D1.x);
        D1.display();
        D1.x = 50;
        System.out.println(D1.x);

        Demo D2 = new Demo(343943);
        D2.y = 55;

        D2.display();
    }
}
