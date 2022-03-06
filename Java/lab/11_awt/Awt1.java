/*
 AWT inheriting Frame class
*/

import java.awt.*;

public class Awt1 extends Frame {
    Awt1() {
        Button b = new Button("Aswin here"); // creating button
        b.setBounds(30,100,80,30); // setting button position on screen
        add(b); // adding button to frame
        setSize(300, 300); // frame size width 300, height 300
        setTitle("This is my basic AWT example"); // title of frame 
        setLayout(null); // no layout manager
        setVisible(true); // now frame will be visible, by default it is not 
    }
    public static void main(String args[]) {
        Awt1 a = new Awt1(); // creating instance of class
    }
}


