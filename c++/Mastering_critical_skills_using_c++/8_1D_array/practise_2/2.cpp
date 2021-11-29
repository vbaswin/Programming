#include <iostream>
using namespace std;

int main() {
    int n, num[200];
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> num[i];

    int max_cnt, max_value = -1;
    for (int i = 0; i < n; ++i) {                       // this is an not adivisible because it uses two for loops increasing the no of operatins
        int cnt = 0;                                    // try the next step too which is much more efficient, faster and future-proof
        for (int j = 0; j < n; ++j) 
            cnt += (num[i] == num[j]);                  // it's num[i] == num[j] and not i == j because we are checking how many times the number repeated 
                                                        // rather than how many times the index repeated :)
        if (max_cnt == -1 || max_cnt < cnt)
            max_cnt = cnt, max_value = num[i];
    }

    cout << max_value << " repeated " << max_cnt << " times " << "\n";

    return 0;
}