import java.awt.*;
import java.awt.event.*;

public class Key2 extends Frame implements KeyListener {
    TextArea a;
    Label l;
    Key2() {
        l = new Label();
        a = new TextArea();
        a.addKeyListener(this);

        l.setBounds(50,80,200,20);
        a.setBounds(50,110,150,200);

        add(l);
        add(a);
        setSize(500,500);
        setLayout(null);
        setVisible(true);
    }
    public void keyPressed(KeyEvent e) {}
    public void keyReleased(KeyEvent e) {
        String text = a.getText();
        String words[] = text.split("\\s");
        l.setText("Words: " + words.length + " Characters: " + text.length());
    }
    public void keyTyped(KeyEvent e) {}
    public static void main(String args[]) {
        new Key2();
    }

}
