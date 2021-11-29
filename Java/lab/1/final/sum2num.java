/* 
Print the sum of two numbers
*/
import java.util.Scanner;

public class sum2num {
    public static void main (String[] args) {
        System.out.println("Enter two numbers: "); 

        Scanner s = new Scanner(System.in);

        int x = s.nextInt();
        int y = s.nextInt();

        int sum = x + y;
        System.out.print(sum+"\n");
    }
}
