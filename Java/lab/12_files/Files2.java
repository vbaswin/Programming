/* Write data to file */

import java.io.FileWriter;
import java.io.IOException;

public class Files2 {
    public static void main(String args[]) {
        try {
            FileWriter hi = new FileWriter("java.txt");
            hi.write("I am Aswin, now dealing with files in JAVA");
            hi.close();
            System.out.println("Successfully wrote to file");
        }
        catch (IOException io){
            System.out.println("An error occured");
            io.printStackTrace();
        }
    }
}
