/*
    A window on the screen
*/

import javax.swing.JFrame;
import javax.swing.SwingUtilities;

public class Swing1 extends JFrame {
    public Swing1() {
        setTitle("Aswin's Example");
        setSize(1000,200);
        setVisible(true);
    }
    public static void main(String[] args) {
        Swing1 sw = new Swing1();
    }
}
