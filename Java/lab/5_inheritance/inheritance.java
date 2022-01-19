/*
 Program name: Inheritance in java
 Rollno: 222
 Authur name: Aswin V B
*/

import java.util.Scanner;

class employee {
    String name, ph_no, address;
    int age, salary;
    void print_salary() {
        System.out.println("salary: " + salary);
    }
}
class officer extends employee {
    String specialisation, dept;
}
class manager extends employee {
    String specialisation, dept;
}

public class inheritance {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        officer off = new officer();
        manager mng = new manager();

        System.out.println("Enter the details of officer and manager\nName: ");
        off.name = sc.nextLine();
        mng.name = sc.nextLine();
        System.out.println("Phone_no: ");
        off.ph_no = sc.nextLine();
        mng.ph_no = sc.nextLine();
        System.out.println("Address: ");
        off.address = sc.nextLine();
        mng.address = sc.nextLine();
        System.out.println("Age: ");
        off.age = sc.nextInt();
        mng.age = sc.nextInt();
        System.out.println("Salary: ");
        off.salary = sc.nextInt();
        mng.salary = sc.nextInt();
        sc.nextLine();
        System.out.println("Specialisation: ");
        off.specialisation=sc.nextLine();
        mng.specialisation=sc.nextLine();
        System.out.println("Department: ");
        off.dept = sc.nextLine();
        mng.dept = sc.nextLine();

        System.out.println();
        System.out.println("Officer");
        System.out.println("Name: " + off.name);
        System.out.println("Age: " + off.age);
        System.out.println("Salary: " + off.salary);
        System.out.println("Address: " + off.address);
        System.out.println("Phone no: " + off.ph_no);
        System.out.println("Specialisation: " + off.specialisation);
        System.out.println("Department: " + off.dept);
       
        System.out.println();
        System.out.println("Manager");
        System.out.println("Name: " + mng.name);
        System.out.println("Age: " + mng.age);
        System.out.println("Salary: " + mng.salary);
        System.out.println("Address: " + mng.address);
        System.out.println("Phone no: " + mng.ph_no);
        System.out.println("Specialisation: " + mng.specialisation);
        System.out.println("Department: " + mng.dept);

    }
}
