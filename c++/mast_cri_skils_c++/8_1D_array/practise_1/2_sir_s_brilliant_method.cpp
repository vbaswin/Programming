#include <iostream>
using namespace std;

int main() {
    int n, num[200]; cin >> n;                  // sir said 1_sir's_brilliant_method.cpp is far more 
                                                // efficient in this regard
    for (int i = 0; i < n; ++i)                 // only thing extra is to take their sum
        cin >> num[i];

    int idx_1, idx_2 = -1;                      // also this method reduces the repetition {i,j} = {4,2} or {2,4}
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {       // j = i + 1 because if we put j = 0, the two numbers won't be different and it will be
            if (idx_1 == -1)                    // just the addition the max number again rather than largest and second largest
                idx_1 = i, idx_2 = j;
            else if ((num[idx_1] + num[idx_2]) < (num[i] + num[j]))
                idx_1 = i, idx_2 = j;
        }
    }
    cout << num[idx_1] << " " << num[idx_2] << "\n";

    return 0;
}