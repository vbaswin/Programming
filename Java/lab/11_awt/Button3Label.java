/*
 Button with ActionListener
*/

import java.awt.*;
import java.awt.event.*;

public class Button3Label {
    public static void main(String args[]) {
        Frame f = new Frame("Button 3 ha!");
        TextField tf = new TextField();
        tf.setBounds(50,50,150,20);
        Button b = new Button("Click here");
        b.setBounds(50,100,80,30);
 
        Label l1, l2;
        l1 = new Label("First label");
        l2 = new Label("Second label");

        l1.setBounds(100,150,100,30);
        l2.setBounds(100,200,100,30);

        b.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e) {
                tf.setText("Welcome to Javapoint");
            }
        });
 
        f.add(l1);
        f.add(b);
        f.add(l2);
        f.add(tf);      

        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
    }
}

