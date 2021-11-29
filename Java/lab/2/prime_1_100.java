public class prime_1_100 {
    public static void main (String[] args) {
        System.out.println("Prime numbers from 1 to 100 are: ");
        String prime_no = "";
        for (int i = 1; i <= 100; ++i) {
            if (i == 1) 
                continue;
            else if (i == 2)
                prime_no = prime_no + i + " ";
            else {
                int is_prime = 1;
                for (int j = 2; j < i; ++j) {
                    if (i % j == 0) {
                        is_prime = 0;
                        break;
                    }
                }
                    if (is_prime == 1)
                        prime_no = prime_no + i + " ";
            }
        }
        System.out.println(prime_no);
    }
}
