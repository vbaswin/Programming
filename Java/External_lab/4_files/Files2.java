import java.io.*;
import java.util.Scanner;

public class Files2 {
    public static void main(String args[]) {
        try  {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter data: ");
            String str = sc.nextLine();
            System.out.println("Enter number : ");
            int n = sc.nextInt();


            FileWriter fw = new FileWriter("aswin.txt");
            fw.write(str); 
            fw.write("\t" + n + "");
            fw.close();
            System.out.println("Successfully wrote");

            File fl = new File("aswin.txt");
            Scanner sc1 = new Scanner(fl);

            BufferedReader br = new BufferedReader(new FileReader(fl));

            for (int i = 0; i < 1; ++i) {
                System.out.println(sc1.nextLine());
                System.out.println(sc1.nextInt());
            }
        }
        catch (IOException ie) {
            System.out.println(ie.getMessage());
            System.out.println(ie);
        }
    }
}
