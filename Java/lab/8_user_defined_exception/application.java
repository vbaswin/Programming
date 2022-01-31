/*
 program name: User-defined exception
 Rollno: 222
 Authur name: Aswin V B
*/
import java.util.Scanner;

class below_age extends RuntimeException {
    below_age(String msg) {
        super(msg);
    }
}
class above_age extends RuntimeException {
    above_age(String msg) {
        super(msg);
    }
}
class below_exp extends RuntimeException {
    below_exp(String msg) {
        super(msg);
    }
}
class application {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter your \n1) experience: ");
        int exp = sc.nextInt();
        System.out.print("2) age: ");
        int age = sc.nextInt();

        System.out.println();
        if (exp < 5 && exp >= 0)
            throw new below_exp("You do not have enough experience!!");
        else if (exp < 0)
            System.out.print("Incorrect experience input\n");
        else if (age < 20) 
            throw new below_age("You are below the minimum age limit!!");
        else if (age > 30) 
            throw new above_age("You are above the maximum age limit!!");
        else 
            System.out.println("You are eligible for applying. Continue!!");
    }
}
