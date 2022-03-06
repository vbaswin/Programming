import java.io.File;

public class Files4 {
    public static void main(String args[]) {
        File ro = new File("java.txt");
        if (ro.exists()) {
            System.out.println("Name: " + ro.getName());
            System.out.println("Absolute path: " + ro.getAbsolutePath());
            System.out.println("Is Readable: " + ro.canRead());
            System.out.println("Is writable: " + ro.canWrite());
            System.out.println("Size in bites: " + ro.length());
        }
        else {
            System.out.println("File does not exist");
        }
    }
}
