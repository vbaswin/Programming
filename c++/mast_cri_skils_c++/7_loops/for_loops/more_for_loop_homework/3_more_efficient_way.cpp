/************************************************ 
Count how many (a,b,c,d) with following property
    ~> 1 <= a,b,c,d <= 200
    ~> a + b = c + d
Try to code using 3 loops only
************************************************/

#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for (int a = 1; a <= 200; ++a) {
        for (int b = 1; b <= 200; ++b) {
            for (int c = 1; c <= 200; ++c) {
                int d = a + b - c;

                if (1 <= d && d <= 200)
                    ++cnt;
            }
        }
    }

    cout << cnt << "\n";

    return 0;
}
