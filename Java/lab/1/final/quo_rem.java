/* 
Find the quotient and remainder of a number
*/
import java.util.Scanner;

public class quo_rem { 
    public static void main (String[] args) {
        System.out.println("Enter divident and divisor: ");
        Scanner s = new Scanner(System.in);

        int divi = s.nextInt();
        int divs = s.nextInt();

        int quo = divi / divs;
        int rem = divi % divs;

        System.out.printf("Quotien: %d\nRemainder: %d\n", quo, rem);
    }
}