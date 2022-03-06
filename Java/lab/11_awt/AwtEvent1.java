import java.awt.*;
import java.awt.event.*;

class AwtEvent1 extends Frame implements ActionListener {
    TextField t;
    AwtEvent1() {
        //create components
        t = new TextField();
        Button b = new Button("Click me");

        t.setBounds(60, 50, 170, 20);
        b.setBounds(100, 120, 80, 30);

        // register listener
        b.addActionListener(this); // passing current instance

        // add components and set size, layout and visibility
        add(t);
        add(b);

        setSize(300,300); // of frame
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        t.setText("Welcome");
    }
    public static void main(String args[]) {
        new AwtEvent1(); // same as AwtEvent1 a = new AwtEvent1();
    }
}
