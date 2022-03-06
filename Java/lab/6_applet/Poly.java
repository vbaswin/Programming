import java.applet.*;
import java.awt.*;
/*<applet code = "Poly.class", width = "300", height = "400"></applet>*/

public class Poly extends Applet {
    public void init() {
        setBackground(Color.black);
    }
    public void paint (Graphics g) {
        g.setColor(Color.red);
        g.drawLine(50, 50, 100, 100);
        g.setColor(Color.green);
        g.drawRect(170, 170, 50, 70);
        g.setColor(Color.cyan);
        g.drawOval(20, 20, 60, 40);

    }
}
