import java.io.*;
import java.util.Scanner;

class Details {
    String name;
    int id;
    String department;
    double salary;

    Details() {
        name = "";
        id = -1;
        department = "";
        salary = -1;
    }
    Details(String name, int id, String department, double salary) {
        this.name = name;
        this.id = id;
        this.department = department;
        this.salary = salary;
    }
    void display() {
        System.out.printf("%s %d %s %.2f\n", name, id, department, salary);
    }
    double getSalary() {
        return salary;
    }
}

public class Files3 {
    public static void main(String args[]) {
        try {
            System.out.print("Enter the number of employees: ");

            BufferedReader br = 
                new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(br.readLine());


            String str = "";

            FileWriter fw = new FileWriter("aswin.txt");
            for (int i = 0; i < n; ++i) {
                System.out.printf("Enter employee[%d] details\n", i+1);
                System.out.printf("Name: ");
                fw.write(br.readLine());
                System.out.printf("Id: ");
                fw.write(" " + br.readLine()); 
                System.out.printf("Deparment: ");
                fw.write(" " + br.readLine());
                System.out.printf("Salary: ");
                fw.write(" " + br.readLine() + "\n");
            }
            fw.close();            

            System.out.println("Wrote to file successfully");

            File file = new File("aswin.txt");
            Scanner sc = new Scanner(file);

            Details[] det = new Details[n];

            for (int i = 0; i < n; ++i) {
                String name = sc.next();
                int id = sc.nextInt();
                String department = sc.next();
                double salary = sc.nextDouble();
                det[i] = new Details(name, id, department, salary);
            }

            for (int i = 0; i < n; ++i) 
                det[i].display();

            double salary = det[0].getSalary();
            double max = salary;
            double min = salary;
            for (int i = 1; i < n; ++i) {
                salary = det[i].getSalary();
                if (max < salary) 
                    max = salary;
                if (min > salary)
                    min = salary;
            }
            System.out.printf("Max: %.3f\nMin: %.3f\n", max, min);
        }
        catch (IOException ie) {
            System.out.println(ie.getMessage());
        }
    }
}
