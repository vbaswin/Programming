import java.applet.Applet;
import java.awt.Graphics;

public class poly extends Applet {
    public void init() {
        setbackground (Color.BLACK);
    }
    public void paint (Graphics g) {
        g.setColor(Color.RED);
        g.drawLine(50, 50, 100, 100);
        g.setColor(Color.GREEN);
        g.drawRect(170, 170, 50, 70);
        g.setColor(Color.CYAN);
        g.drawOval(20, 20, 60, 40);

    }
}
