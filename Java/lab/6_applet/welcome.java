import java.applet.Applet;
import java.awt.*;

public class welcome extends Applet {
    public void paint(Graphics g) {
        g.drawString("welcome to applet", 50, 50);
        g.setColor(Color.red);
        g.fillRect(170,100,110,30);
        g.setColor(Color.blue);
        g.drawArc(90,150,30,30,0,180);
    } 
}

/*<applet code="welcome.class" width="300" height="300"></applet>*/
