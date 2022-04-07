/* 
    Example of JLabel
*/

import javax.swing.*;

class Swing4 {
    public static void main(String args[]) {
        JFrame lf = new JFrame("studytonight ==> Label Demo");
        JLabel l1, l2;
        l1 = new JLabel("Welcome to studytonight.com");
        l2 = new JLabel("How are you?");
        l1.setBounds(50,50,200,30);
        l2.setBounds(50,100,200,30);
        lf.add(l1);
        lf.add(l2);
        lf.setSize(300,300);
        lf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        lf.setLayout(null);
        lf.setVisible(true);
    }
}
