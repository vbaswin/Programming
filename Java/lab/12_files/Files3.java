/* Read data from file */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner; // not java.io.Scanner

public class Files3 {
    public static void main(String args[]) {
        try {
            File hw = new File("java.txt");
            Scanner s = new Scanner(hw);

            while (s.hasNextLine()) {
                String str = s.nextLine();
                System.out.println(str);
            }
        }
        catch (FileNotFoundException fnfe) {
            System.out.println("File not found");
            fnfe.printStackTrace();
        }
    }
}
