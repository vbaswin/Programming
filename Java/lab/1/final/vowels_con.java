/* 
Find the number of vowels and consonants in the string
*/
import java.util.Scanner;

public class vowels_con {
    public static void main (String[] args) {
        System.out.println("Enter the string: ");

        Scanner s = new Scanner (System.in);

        String st = s.nextLine();
        String st1 = st.tolowercase();
        char str[] = st.toCharArray();

        //for (int i = 0; i < st.length(); i++) {
        //    if ('A' <= str[i] && str[i] <= 'Z')
        //        str[i] = (char)((int)str[i] + 32); 
        //}  >>==>> CHUMMA oru rasam


        int cnt = 0, vowels = 0, consonants = 0;
        while (cnt < st.length()) {
            if (str[cnt] == 'a' || str[cnt] == 'e' || 
            str[cnt] == 'i'|| str[cnt] == 'o' ||
            str[cnt] == 'u')
                ++vowels;
            else if('a' <= str[cnt] && str[cnt] <= 'z')
                ++consonants;
            cnt++;
        }

        System.out.printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    }
}