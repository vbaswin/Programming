import java.util.Scanner;

public class prime_or_not {
    public static void main(String[] args) {
        System.out.println("Enter the Number: ");

        Scanner s = new Scanner (System.in);
        int n = s.nextInt();
        int is_prime = 1;

        if (n == 1) 
            is_prime = 0;
        else if (n == 2)
            is_prime = 1;
        else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime == 1)
            System.out.println(n + " is Prime");
        else 
            System.out.println(n + " is not Prime");
    } 
}
