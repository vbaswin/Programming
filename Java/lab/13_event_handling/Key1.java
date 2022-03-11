import java.awt.*;
import java.awt.event.*;

public class Key1 extends Frame implements KeyListener {
    Label l;
    TextArea a;

    Key1() {
        l = new Label();
        l.setBounds(20,50,100,20);
        a = new TextArea();
        a.setBounds(20,80,100,100);
        a.addKeyListener(this);
        add(l);
        add(a);
        setSize(400,400);
        setLayout(null);
        setVisible(true);
    }
    public void keyPressed(KeyEvent e) {
        l.setText("Key Pressed");
    }
    public void keyReleased(KeyEvent e) {
        l.setText("Key Released");
    }
    public void keyTyped(KeyEvent e) {
        l.setText("Key Typed");
    }
    public static void main(String args[]) {
        new Key1();
    }
}
