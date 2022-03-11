import java.awt.*;
import java.awt.event.*;
import java.awt.Graphics;

public class Mouse3 extends Frame implements MouseMotionListener {
    Label l;
    Color c = Color.BLUE;
    Mouse3() {
        addMouseMotionListener(this);
        l = new Label();
        l.setBounds(30,50,150,20);
        add(l);
        
        setSize(400,400);
        setLayout(null);
        setVisible(true);
    }
    public void mouseDragged(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: " + e.getY());
        Graphics g = getGraphics();
        g.setColor(c);
        g.fillOval(e.getX(), e.getY(), 20,20);
    }
    public void mouseMoved(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: " + e.getY());
    }
    public static void main(String args[]) {
        new Mouse3();
    }
}
