import java.awt.*;

public class Button1 {
    public static void main(String args[]) {
        // creating new frame with the label
        Frame f = new Frame("Button Example");
    
        // create instance of button with label
        Button b = new Button("Click here");

        // set positon for button in frame
        b.setBounds(100,100,80,30);

        f.add(b);

        f.setSize(300,300);
        f.setLayout(null);
        f.setVisible(true);
    }
}
