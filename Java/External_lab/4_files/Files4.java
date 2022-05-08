import java.io.*;

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
        System.out.printf("%s %d %s %f\n", name, id, department, salary);
    }
}

class Files4 {
       public static void main(String args[]) { 
           try {
            BufferedReader br = 
                    new BufferedReader(new InputStreamReader(System.in));
                int n = Integer.parseInt(br.readLine());

            Details[] det = new Details[n];

            for (int i = 0; i < n; ++i) {
                    System.out.printf("Enter employee[%d] details\n", i+1);
                    System.out.printf("Name: ");
                    String name = br.readLine();
                    System.out.printf("Id: ");
                    int id = Integer.parseInt(br.readLine());
                    System.out.printf("Deparment: ");
                    String department = br.readLine();
                    System.out.printf("Salary: ");
                    double salary = Double.parseDouble(br.readLine());
                    det[i] = new Details(name, id, department, salary);

           }
            
           for (int i = 0; i < n; ++i)
               det[i].display();
           }
           catch (IOException ie) {
               System.out.println(ie);
           }
       }
}
