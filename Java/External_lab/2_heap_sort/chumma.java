import java.util.Scanner;

public class chumma {
    public static void read(int arr[], Scanner sc) {
        for (int i = 0; i < arr.length; ++i)
            arr[i] = sc.nextInt();
    }
    public static void display(int arr[]) {
        for (int i = 0; i < arr.length; ++i)
            System.out.println(arr[i]);
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int[] arr = new int[num];
        read(arr, sc);
        display(arr);
    }
}
