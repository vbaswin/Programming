import java.io.File;
import java.io.IOException;

public class Files5 {
    public static void main(String args[]) {
        try {
            File tree = new File("delTxt.txt");
            tree.createNewFile();
            if (tree.delete()) {
                System.out.println("Deleted the file: " + tree.getName());
            }
            else {
                System.out.println("Failed to delete the file");
            }
        }
        catch (IOException ioe) {
            System.out.println("An error occured");
            ioe.printStackTrace();
        }
    }
}
