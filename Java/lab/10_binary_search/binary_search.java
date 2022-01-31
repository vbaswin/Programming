/*
 Program name: Binary search
 Rollno: 222
 Authur name: Aswin V B
*/

import java.util.Scanner;

class binary_search {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[20];

        System.out.print("\nEnter the size of array: ");
        int n = sc.nextInt();
        System.out.print("Enter the sorted array: ");
        for (int i = 0; i < n; ++i)
            arr[i] = sc.nextInt();

        System.out.print("Enter the key: ");
        int key = sc.nextInt();

        int start = 0, end = n - 1, middle = 0;
        while (start <= end) {
            middle = (start + end)/2;
            if (key == arr[middle]) {
                System.out.println("\n" + arr[middle] + " is present in " + 
                        (middle + 1) + " position" + "\n");
                break;
            }
            else if (key > arr[middle]) 
                start = middle + 1;
            else 
                end = middle - 1;
        }
        if (start > end)
            System.out.println("\n" + key + " not present \n");
    }
}
