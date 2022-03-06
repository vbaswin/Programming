import java.awt.*;

public class Button2 {
    Button2() {
        Frame obj = new Frame("Frame to display buttons");
        Button button1, button2, button3;
        button1 = new Button();
        button2 = new Button("Click Here"); // first way to add button label 
        button3 = new Button();

        button3.setLabel("Button 3"); // second way to add button label

        obj.add(button1);
        obj.add(button2);
        obj.add(button3);

        obj.setLayout(new FlowLayout()); // no need to specify the layout
                                         // but won't be what we are looking for
        obj.setVisible(true);
        obj.setSize(300,400);
    }
    public static void main(String args[]) {
        new Button2();
    }
}
