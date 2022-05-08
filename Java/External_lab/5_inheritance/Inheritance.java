import java.io.*;
import java.util.Scanner;

class Employee {
    String name;
    int age;
    long ph_no;
    String address;
    double salary;

    void print_salary() {
        System.out.println(salary);
    }
}

class Officer extends Employee {
    String specialization, dept;
    
    void read(BufferedReader br) {
        try {
            System.out.printf("Enter detais of Officer\nName: ");
            name = br.readLine();
            System.out.printf("age: ");
            age = Integer.parseInt(br.readLine());
            System.out.printf("ph_no: ");
            ph_no = Long.parseLong(br.readLine());
            System.out.printf("address: ");
            address = br.readLine();
            System.out.printf("salary: ");
            salary = Double.parseDouble(br.readLine());
            System.out.printf("specialization: ");
            specialization = br.readLine();
            System.out.printf("dept: ");
            dept = br.readLine();
        }
        catch (IOException ie) {
            System.out.println(ie);
        }
    }
    

    void display() {
        System.out.printf("%s %d %d %s %.2f %s %s ", name, age, ph_no, 
                address, salary, specialization, dept);
        print_salary();
    }
}

class Manager extends Employee {
    String specialization, dept;

    void read(BufferedReader br) {
        try {
            System.out.printf("Enter details of Manager\nName: ");
            name = br.readLine();
            System.out.printf("age: ");
            age = Integer.parseInt(br.readLine());
            System.out.printf("ph_no: ");
            ph_no = Long.parseLong(br.readLine());
            System.out.printf("address: ");
            address = br.readLine();
            System.out.printf("salary: ");
            salary = Double.parseDouble(br.readLine());
            System.out.printf("specialization: ");
            specialization = br.readLine();
            System.out.printf("dept: ");
            dept = br.readLine();
        }
        catch (IOException ie) {
            System.out.println(ie);
        }
    }
    

    void display() {
        System.out.printf("%s %d %d %s %.2f %s %s ", name, age, ph_no, 
                address, salary, specialization, dept);
        print_salary();
    }
}


class Inheritance {
    public static void main(String args[]) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Officer of = new Officer();
        of.read(br);
        of.display();

        Manager mr = new Manager();
        mr.read(br);
        mr.display();
    }
}
