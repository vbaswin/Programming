import java.awt.*;
import java.awt.event.*;

public class Window1 extends Frame implements WindowListener {
    Window1() {
        addWindowListener(this);
        setSize(400,400);
        setLayout(null);
        setVisible(true);
    }
    public void windowOpened(WindowEvent we) {
        System.out.println("Window Opened");
    }
    public void windowClosed(WindowEvent we) {
        System.out.println("Window Closed");
    }
    public void windowClosing(WindowEvent we) {
        System.out.println("Window Closing");
        dispose();
    }
    public void windowActivated(WindowEvent we) {
        System.out.println("Window Activated");
    }
    public void windowDeactivated(WindowEvent we) {
        System.out.println("Window Deactivated");
    }
    public void windowIconified(WindowEvent we) {
        System.out.println("Window Iconified");
    }
    public void windowDeiconified(WindowEvent we) {
        System.out.println("Window Deiconified");
    }
    public static void main(String args[]) {
        new Window1();
    }
}
