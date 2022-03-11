/*
 Program name: Mouse events
 Rollno: 222
 Authur name: Aswin V B
*/

import java.awt.*;
import java.awt.event.*;

public class MouseLab extends Frame implements MouseListener, 
       MouseMotionListener{
    Label l, l2;
    MouseLab() {
        addMouseListener(this);
        addMouseMotionListener(this);
        l = new Label();
        l2 = new Label();
        l.setBounds(20,50,150,20);
        l2.setBounds(20,100,100,20);
        add(l);
        add(l2);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public void mouseClicked(MouseEvent me) {
        l2.setText("Mouse Clicked");
    }
    public void mousePressed(MouseEvent me) {
    }
    public void mouseEntered(MouseEvent me) {
        l2.setText("Mouse Exited");
    }
    public void mouseExited(MouseEvent me) {
        l2.setText("Mouse Exited");
    }
    public void mouseReleased(MouseEvent me) {
        l2.setText("Mouse Released");
    }
    public void mouseMoved(MouseEvent me) {
        l.setText("X: " + me.getX() + "Y: " + me.getY());
        l2.setText("Mouse Moved");
    }
    public void mouseDragged(MouseEvent me) {
        l.setText("X: " + me.getX() + "Y: " + me.getY());
        l2.setText("Mouse Dragged");
    }
    public static void main(String args[]) {
        new MouseLab();
    }
}
