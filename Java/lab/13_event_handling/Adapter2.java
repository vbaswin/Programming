import java.awt.*;
import java.awt.event.*;

// by extending adapter class here mouse adapter 
public class Adapter2 extends MouseAdapter {
    Label l;
    Frame f;
    Adapter2() {
        l = new Label();
        l.setBounds(50,80,150,20);
        f = new Frame("Mouse motion + press");
        f.setSize(400,400);
        f.add(l);
        f.addMouseListener(this);
        f.addMouseMotionListener(this);
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e) {
                f.dispose();
            }
        });
   
        f.setLayout(null);
        f.setVisible(true);
    }
    public void mouseClicked(MouseEvent me) {
        l.setText("X: "+ me.getX() + " Y: " + me.getY());
        Graphics g = f.getGraphics();
        g.setColor(Color.BLUE);
        g.fillOval(me.getX(), me.getY(), 20,20);
    } 
    public void mouseDragged(MouseEvent me) {
        l.setText("X: "+ me.getX() + " Y: " + me.getY());
        Graphics g = f.getGraphics();
        g.setColor(Color.GREEN);
        g.fillOval(me.getX(), me.getY(), 20,20);
    }
    public static void main(String args[]) {
        new Adapter2();
    }

}
