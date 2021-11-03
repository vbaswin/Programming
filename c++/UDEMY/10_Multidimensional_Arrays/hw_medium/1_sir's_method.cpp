#include <iostream>
using namespace std;

int main() {
    int n, m, is_prime[100][100] = {0}, val;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> val;

            if (val <= 1)
                continue;
            is_prime[i][j] = 1;
            for (int k = 2; k < val; k++) {
                if (val%k == 0) {
                    is_prime[i][j] = 0;
                    break;
                }
            }
        }
    }

    int q, is, js, rs, cs;
    cin >> q;
    while(q--) {
        cin >> is >> js >> rs >> cs;
        int cnt = 0;
        for (int i = is; i < is + rs; i++) 
             for (int j = js; j < js + cs; j++) 
                cnt += is_prime[i][j];
         
       cout << cnt << "\n";
     }
    return 0;
}