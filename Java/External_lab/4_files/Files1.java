import java.io.File;
import java.util.Scanner;

public class Files1 {
    public static void main(String args[]) {
        Files1 fl = new Files1();
        fl.newFile();
    }

    public void newFile() {
        String strPath = "", strName = "";

        try {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter file name: ");
            strName = sc.nextLine();
            System.out.println("Enter path: ");
            strPath = sc.nextLine();

            File file1 = new File(strPath + "" + strName + ".txt");
            file1.createNewFile();
        }
        catch(Exception e) {
            System.out.println(e);
        }

    }
}

