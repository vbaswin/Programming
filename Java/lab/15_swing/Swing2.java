/*
    Example of JButton
*/

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class Swing2 extends JFrame {
    Swing2() {
        JButton b1 = new JButton("Yes");
        JButton b2 = new JButton("No");
        b1.setBounds(130,100,100,40);
        b2.setBounds(180,100,100,40);
        add(b1);
        add(b2);
        setTitle("hi");
        setSize(400, 400);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args) {
        new Swing2();
    }
}
