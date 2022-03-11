import java.awt.*;
import java.awt.event.*;

public class Item1 implements ItemListener {
    Checkbox checkbox1, checkbox2;
    Label l;
    Item1() {
        Frame f = new Frame("item litener");
        l = new Label();
        l.setAlignment(Label.CENTER);
        l.setSize(400,100);
        checkbox1 = new Checkbox("C++");
        checkbox2 = new Checkbox("Java");
        checkbox1.setBounds(100,100,50,50);
        checkbox2.setBounds(100,150,50,50);
        f.add(l);
        f.add(checkbox1);
        f.add(checkbox2);
        checkbox1.addItemListener(this);
        checkbox2.addItemListener(this);
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
    }

    public void itemStateChanged(ItemEvent e) {
        if(e.getSource() == checkbox1)
            l.setText("C++ checkbox: " + 
                    (e.getStateChange() == 1? "Checked":"Unchecked"));
        if(e.getSource() == checkbox2)
            l.setText("Java checkbox: " +
                    (e.getStateChange() == 1? "Checked":"Unchecked"));
    }
    public static void main(String args[]) {
        new Item1();
    }
}
