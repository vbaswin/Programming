import java.awt.*;
import java.awt.event.*;

public class TrafficLight extends WindowAdapter implements ItemListener{
    Checkbox cb1, cb2, cb3;
    Frame f;
    TrafficLight() {
        f = new Frame("Traffic Light");
        cb1 = new Checkbox("Stop");
        cb2 = new Checkbox("Ready");
        cb3 = new Checkbox("Go");
        cb1.setBounds(20,80,80,20);
        cb2.setBounds(100,80,80,20);
        cb3.setBounds(180,80,80,20);
        f.addWindowListener(this);
        f.add(cb1);
        f.add(cb2);
        f.add(cb3);
        f.setSize(300, 400);

        cb1.addItemListener(this);
        cb2.addItemListener(this);
        cb3.addItemListener(this);
        f.setLayout(null);
        f.setVisible(true);


   }
    public void windowClosing(WindowEvent we) {
        f.dispose();
    }
    public void itemStateChanged(ItemEvent ie) {
        if (ie.getSource() == cb1) {
            if (ie.getStateChange() == 1) {
                Graphics g = f.getGraphics();
                g.setColor(Color.RED);
                g.fillOval(100,200,30,30);
                g.setColor(Color.WHITE);
                g.fillOval(100,250,30,30);
                g.fillOval(100,300,30,30);
            }
        }
        else if (ie.getSource() == cb2) {
            if (ie.getStateChange() == 1) {
                Graphics g = f.getGraphics();
                g.setColor(Color.ORANGE);
                g.fillOval(100,250,30,30);
                g.setColor(Color.WHITE);
                g.fillOval(100,200,30,30);
                g.fillOval(100,300,30,30);
            }
        }
        else if (ie.getSource() == cb3) {
            if (ie.getStateChange() == 1) {
                Graphics g = f.getGraphics();
                g.setColor(Color.GREEN);
                g.fillOval(100,300,30,30);
                g.setColor(Color.WHITE);
                g.fillOval(100,200,30,30);
                g.fillOval(100,250,30,30);
            }
        }
    }
    public static void main(String args[]) {
        new TrafficLight();
    }

}
