import java.io.File;

public class Files6 {
    public static void main(String args[]) {
        File del = new File("chumma"); // you just need to specify the name
        // it will delete without even condering whether it is file of folder
        if (del.delete())
            System.out.println("Deleted the folder: " + del.getName());
        else 
            System.out.println("Failed to delete the folder");
    }
}
