import java.awt.event.*;

class Outer implements ActionListener {
    AwtEvent2 obj;
    Outer(AwtEvent2 obj) {
        this.obj = obj;
    }
    public void actionPerformed(ActionEvent e) {
        obj.tf.setText("Welcome");
    }
}
