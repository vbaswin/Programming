import java.awt.*;
import java.awt.event.*;

public class Mouse1 extends Frame implements MouseListener {
    Label l;
    Mouse1() {
        addMouseListener(this);
        l = new Label();
        l.setBounds(20,50,100,20);
        add(l);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }
    public void mouseClicked(MouseEvent e) {
        l.setText("Mouse Clicked");
    }
    public void mousePressed(MouseEvent e) {
        l.setText("Mouse Pressed");
    }
    public void mouseEntered(MouseEvent e) {
        l.setText("Mouse Entered");
    }
    public void mouseExited(MouseEvent e) { // not excited but exited 
        l.setText("Mouse Exited");
    }
    public void mouseReleased(MouseEvent e) {
        l.setText("Mouse Released");
    }
    public static void main(String args[]) {
        new Mouse1();
    }
}
