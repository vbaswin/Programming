/*
 Event handling by outer class
*/


import java.awt.*;
import java.awt.event.*;

class AwtEvent2 extends Frame {
    TextField tf;
    AwtEvent2() {
        tf = new TextField();
        Button b = new Button("Click here");

        tf.setBounds(100, 100, 80, 30);
        b.setBounds(100, 150, 80, 30);

        Outer o = new Outer(this); // register listener 
        b.addActionListener(o); // passing outer class instance 

        add(tf);
        add(b);

        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String args[]) {
        new AwtEvent1();
    }

}
