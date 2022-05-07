import java.util.Scanner;

public class 2_heap_sort {
    public static heapify(int arr[], int n, int i) {
        int largest = i;
        int lc = 2*i+1;
        int rc = 2*i+2;

        if (arr[lc] > arr[largest] && lc < n)
            largest = lc;
        if (arr[rc] > arr[largest] && rc < n)
            largest = rc;
        if (largest != i) {
            swap(&arr[largest], &arr[i]);
            heapify(arr, n, largest);
        }

    }
    public static heap_sort(int arr[], int n) {
        for (int i = n/2-1; i >= 0; --i) 
            heapify(arr, n, i);
        for (int i = n-1; i >= 0; --i) {
            swap(&arr[0], &arr[i]);
            heapify(arr, n, i);
        }
    }
    public read(int arr[], int n) {
        for (int i = 0;i < n; ++i)
            arr[i] = sc.nextInt();
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner();
        int num = sc.nextInt();
        int arr[];
        2_heap_sort hp = new 2_heap_sort();
        hp.read(arr, num);
        heap_sort(arr, num);
    }
}
