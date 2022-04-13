#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub) {
    int pivot = a[ub];
    int i = (lb -1);

    for (int j = lb; j < ub; ++j) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[ub]);
    return (i+1);
}

void quick_sort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quick_sort(a, lb, loc-1);
        quick_sort(a, loc +1, ub);
    }
}

int main() {
    int a[5], n;
    cin >> n;
    for (int i = 0 ; i < n; ++i) 
        cin >> a[i];

    quick_sort(a, 0, n-1);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}
