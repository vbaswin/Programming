import java.awt.*;
import java.awt.event.*;

// not extending adapter class 
public class Adapter1 {
    Frame f;
    Adapter1() {
        f = new Frame("Adapter class");
        // overriding windowClosing method
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                f.dispose();
            }
        });
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[]) {
        new Adapter1();
    }

}
