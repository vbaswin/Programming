/*
 Event handling by anonymous class
*/

import java.awt.*;
import java.awt.event.*;

class AwtEvent3 extends Frame {
    TextField tf;
    AwtEvent3() {
        tf = new TextField();
        Button b = new Button("Click HERE");

        tf.setBounds(100,100,80,30);
        b.setBounds(100,150,80,30);

        add(tf);
        add(b);

        b.addActionListener(
            new ActionListener() {
                public void actionPerformed(ActionEvent e) {
                    tf.setText("Welcome");
                }
            }
        );

        setSize(300,300);
        setLayout(null);
        setVisible(true);

    }
    public static void main(String args[]) {
        new AwtEvent3();
    }
}
