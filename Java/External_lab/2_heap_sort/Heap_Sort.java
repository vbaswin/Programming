import java.util.Scanner;

public class Heap_Sort {
    void heapify(int arr[], int n, int i) {
        int largest = i;
        int lc = 2*i+1;
        int rc = 2*i+2;

        if (lc < n && arr[lc] > arr[largest])
            largest = lc;
        if (rc < n && arr[rc] > arr[largest])
            largest = rc;
        if (largest != i) {
            int tmp = arr[largest];
            arr[largest] = arr[i];
            arr[i] = tmp;
            heapify(arr, n, largest);
        }

    }
    void heap_sort(int arr[], int n) {
        for (int i = (n/2)-1; i >= 0; --i)
            heapify(arr, n, i);
        for (int i = n-1; i >= 0; --i) {
            int tmp = arr[0];
            arr[0] = arr[i];
            arr[i] = tmp;
            heapify(arr, i, 0);
        }
    }
    public static void read(int[] arr, Scanner sc) {
        for (int i = 0;i < arr.length; ++i)
            arr[i] = sc.nextInt();
    }
    public static void display(int arr[]) {
        for (int i = 0; i < arr.length; ++i)
            System.out.printf(arr[i] + " ");
        System.out.println();
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int[] arr = new int[num];
        read(arr, sc);

        Heap_Sort hp = new Heap_Sort();
        hp.heap_sort(arr, num);
        hp.display(arr);
    }
}
