#include <iostream>
using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M >> W;

    int cnt = 0;                            // "one of 'the' most thoughest way" to think
    for (int a = 1; a <= N; ++a) {          // think for many times before getting to the conclusion
        for (int b = a; b <= M; ++b) {      // here b = a and not b = 1
            int c = a + b;                  // we need to find all the numbers that satisfy a + b <= c #
                                            // here we are finding c ie; = a + b which is the minimum and all the numbers greater than c 
                                            // is also valid by # so 
            if (c <= W)                     // check if c is <= w if so count all the values between w and c
                cnt += W - c +1;            
        }                                   
    }

    cout << cnt << "\n";

    return 0;
}

