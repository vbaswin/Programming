/*
 Program name: Interface inheritance
 Rollno: 222
 Authur name: Aswin V B
*/

import java.util.Scanner;

interface name {
    void name(); 
}

interface rollno {
    void rollno();
}

interface connection extends name, rollno {
    void connection(); 
}

class display implements connection {
    String str;
    int n;
    Scanner sc = new Scanner(System.in);

    public void connection() {
        System.out.println("connection" + "\n");
    }
    public void name() {
        System.out.print("Enter name: ");
        str = sc.nextLine();
    }
    public void rollno() {
        System.out.print("Enter rollno: ");
        n = sc.nextInt();
    }
    public void display() {
        System.out.println("\n" + str + " " + n + "\n");
    }
}

class InterfaceInheritance extends display{
    public static void high() {
        System.out.println("\n" + "main class");
    }
    public static void main(String args[]) {
        
        high();
        display d = new display();
        d.connection();
        d.name();
        d.rollno();
        d.display();
    }
}
