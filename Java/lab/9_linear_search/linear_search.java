/*
 Program name: Linear search
 Rollno: 222
 Authur name: Aswin V B
*/

import java.util.Scanner;


class linear_search {
    public static void main(String[] args) {
        int[] arr = new int[20];
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the size of array: ");
        int n = sc.nextInt();

        System.out.printf("Enter the array: ");
        for (int i = 0; i < n; ++i)
            arr[i] = sc.nextInt();

        System.out.print("Enter the key: ");
        int key = sc.nextInt();

        int i;
        for (i = 0; i < n; ++i) {
            if (arr[i] == key) {
                System.out.print("\n" + key + " is present in " + (i + 1) +
                        " position\n");
                break;
            }
        }
        if (i == n)
            System.out.print("\n" + key + " is not present\n");
    }
}
