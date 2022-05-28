#include <iostream>
using namespace std;

int sum(int arr[], int len) {
    if (len == 0)
        return 0;
    return arr[len-1] + sum(arr, len-1);
}

int main() {
    int arr[5] = {1,2,3,4,5};
    cout << sum(arr, 5) << "\n";
    return 0;
}
