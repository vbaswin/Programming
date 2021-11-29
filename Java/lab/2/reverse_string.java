import java.util.Scanner;

public class reverse_string {
    public static void main (String[] args) {
        System.out.println ("Enter the string: ");

        Scanner s = new Scanner(System.in);
        String st = s.nextLine();

        char str[] = st.toCharArray();

        int start = 0, end = st.length() - 1;
        while (start < end) {
            char tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
            ++start; --end; 
        }
        System.out.println(str);
    } 
}