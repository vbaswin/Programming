/*
 We are creating instance of Frame class
*/
 

import java.awt.*;

// class Awt2 directly creates instance of Frame class
class Awt2 {
    Awt2 () {
        Frame f = new Frame(); // initializing using constructor 
        Label l = new Label("HERE is Aswin"); // creating label
        Button b = new Button("Submit"); // creating button
        TextField t = new TextField(); // creating textfield

        // setting position of abouve components in frame
        l.setBounds(20,80,100,30);
        t.setBounds(20,100,80,30);
        b.setBounds(100,100,80,30);

        // adding components into frame
        f.add(b);
        f.add(l);
        f.add(t);

        f.setSize(400, 300); // frame width 300, height 300
        f.setTitle("Aswin's Awt"); // setting title
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[]) {
        Awt2 as = new Awt2();
    }
}
