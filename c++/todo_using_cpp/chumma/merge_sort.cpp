#include <iostream>
using namespace std;

void merge (int a[], int lb, int mid, int ub) {
    int n1 = mid - lb +1;
    int n2 = ub - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = a[lb + i];
    for (int j = 0; j < n2; ++j)
        R[j] = a[mid +1 + j];

    int i = 0, j = 0, k = lb;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            ++i;
        }
        else {
            a[k] = R[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) {
        a[k] = L[i];
        ++i, ++k;
    }
    while (j < n2) {
        a[k] = R[j];
        ++j, ++k;
    }
}

void merge_sort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb +ub)/2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid+1, ub);
        merge(a, lb, mid, ub);
    }
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0 ; i < n; ++i) 
        cin >> a[i];

    merge_sort(a, 0, n-1);
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}
