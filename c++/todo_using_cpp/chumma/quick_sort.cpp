#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while(start < end) {
        while (a[start] <= pivot) 
            ++start;
        while (a[end] > pivot)
            --end;
        if (start < end)
            swap(a[start], a[end]);
    }
    swap(a[lb], a[end]);
    return end;
}

void quick_sort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quick_sort(a, lb, loc-1);
        quick_sort(a, loc +1, ub);
    }
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0 ; i < n; ++i) 
        cin >> a[i];

    quick_sort(a, 0, n-1);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}
