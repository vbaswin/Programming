import java.util.Scanner;

public class quo_rem { 
    public static void main (String[] args) {
        System.out.println("Enter divident and divisor: ");
        Scanner aswin = new Scanner(System.in);

        int divi = aswin.nextInt();
        int divs = aswin.nextInt();

        int quo = divi / divs;
        int rem = divi % divs;

        System.out.printf("Quotien: %d\nRemainder: %d\n", quo, rem);
    }
}