import java.awt.*;
import java.awt.event.*;

public class Calculator extends WindowAdapter implements ActionListener {
    Frame f;
    Label l;
    Button b1, b2, b3, b4, b5, b6, b7, b8, b9, b0;
    Button add, sub, mul, div, calc, clr, dot, neg, back;
    double xd, num1, num2, check;

    Calculator() {
        f = new Frame("Calculator");
        l = new Label();
        l.setBackground(Color.LIGHT_GRAY);
        l.setBounds(50,50,260,60);

        b1 = new Button("1");
        b2 = new Button("2");
        b3 = new Button("3");
        b4 = new Button("4");
        b5 = new Button("5");
        b6 = new Button("6");
        b7 = new Button("7");
        b8 = new Button("8");
        b9 = new Button("9");
        b0 = new Button("0");
        
        neg = new Button("+/-");
        calc = new Button("=");
        add = new Button("+");
        mul = new Button("*");
        div = new Button("/");
        dot = new Button(".");
        back = new Button("back");
        sub = new Button("-");

        b1.setBounds(50,340,50,50);
        b2.setBounds(50,340,50,50);
        b3.setBounds(50,340,50,50);
        add.setBounds(50,340,50,50);

        b4.setBounds(50,270,50,50);
        b5.setBounds(50,270,50,50);
        b6.setBounds(50,270,50,50);
        sub.setBounds(50,270,50,50);

        b7.setBounds(50,200,50,50);
        b8.setBounds(50,200,50,50);
        b9.setBounds(50,200,50,50);
        mul.setBounds(50,200,50,50);

        b0.setBounds(120,410,50,50);
        neg.setBounds(120,410,50,50);
        dot.setBounds(120,410,50,50);
        calc.setBounds(120,410,50,50);

        back.setBounds(120,130,50,50);
    }
}
