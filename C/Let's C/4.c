#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, arr[20],q, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }


    int position = 0;
    scanf("%d", &q);
    for (int j = 0; j < q; j++) {

        scanf("%d", &x);
        bool is_present = 0;
        for (int i = 0; i < n; i++) {
            if (x == arr[i]) {
                is_present = 1;
                position = i;
                break;
            }
        }

        if (is_present)
            printf("Yes %d\n", position + 1);
        else {
            for (int i = 0; i < n; i++) {
                if (arr[i] > x) {
                    printf("No %d\n", arr[i]);
                    break;
                }
            }
        }
    }

    return 0;   
}