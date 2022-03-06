/* Create file */

import java.io.File;
import java.io.IOException;
// same as import java.io.*;

public class Files1 {
    public static void main(String args[]) {
        try {
            File Obj = new File("java.txt");
            if (Obj.createNewFile()) {
                System.out.println("\nFile name: " + Obj.getName());
            }
            else {
                System.out.println("\nFile already exists");
            }
        }
        catch (IOException ioe) {
            System.out.println(ioe);
        }

    }
}
