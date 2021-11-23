import java.util.Scanner;

public class vowels_con {
    public static void main (String[] args) {
        System.out.println("Enter the string: ");

        Scanner as = new Scanner (System.in);

        String st = as.nextLine();

        char str[] = st.toCharArray();

        //System.out.print("The string is: "+st+"\n");

        for (int i = 0; i < st.length(); i++) {
            if ('A' <= str[i] && str[i] <= 'Z')
                str[i] = (char)((int)str[i] + 32); /* to do
                this like i = i + 1 in string you need to 
                first assign it to char array, not possible in 
                string */
        }

        /* in char array the index is called out as same as in c++
        but in string it is str.charAt(index)  entirely different
        do note about it. */
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