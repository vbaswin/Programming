/*
    JTextfield
*/

import javax.swing.*;
import java.awt.*;

public class Swing3 extends JFrame {
    public Swing3() {
        JTextField jtf = new JTextField(20);
        add(jtf);
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400,400);
        setVisible(true);
    }
    public static void main(String args[]) {
        new Swing3();
    }
}
