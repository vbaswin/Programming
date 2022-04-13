#include <iostream>
#include <algorithm>
using namespace std;

struct store {
    int a;
    char c;
};

void display (struct store m[]) {
    for (int i = 0; (m+i)->c != '\0' ; ++i)
        cout << (m+i)->a << " " << (m+i)->c << endl; 
}

int length(struct store m[]) {
    int i;
    for (i = 0; (m+i)->c != '\0' ; ++i);
    return i;
}

/*
void merge (struct store a[], int lb, int mid, int ub) {
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

void merge_sort(struct store a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb +ub)/2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid+1, ub);
        merge(a, lb, mid, ub);
    }
}
*/

bool sorter (store const& lhs, store const& rhs) {
    if (lhs.c != rhs.c) 
        return lhs.c < rhs.c;
}
int main() {
    struct store a[50];
    a[0] = { 27, 'b'};
    a[1] = {100, 'v'};
    a[2] = { 7, 'a'};

    int n = length(a);
    sort(a.begin(), a.end(), &sorter);
    // merge_sort(a, 0, n -1);

    display(a);
    return 0;
}
