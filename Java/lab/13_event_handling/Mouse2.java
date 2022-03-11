import java.awt.*;
import java.awt.event.*;

public class Mouse2 extends Frame implements MouseListener {
    Label l;
    Mouse2() {
        addMouseListener(this);
        l = new Label();
        l.setBounds(20,50, 150,20);
        add(l);

        setSize(500,500);
        setLayout(null);
        setVisible(true);
    }
    public void mouseClicked(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: "+ e.getY());
        Graphics g = getGraphics();
        g.setColor(Color.BLUE);
        g.fillOval(e.getX(), e.getY(), 30,30);
    }
    public void mouseExited(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: "+ e.getY());
    };
    public void mouseEntered(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: "+ e.getY());
    };
    public void mouseReleased(MouseEvent e) {
        l.setText("X: " + e.getX() + "Y: "+ e.getY());
    };
    public void mousePressed(MouseEvent e) {
        Graphics g = getGraphics();
        g.setColor(Color.BLUE);
        g.fillOval(e.getX(), e.getY(), 30,30);
    };
    public static void main(String args[]) {
        new Mouse2();
    }
}
