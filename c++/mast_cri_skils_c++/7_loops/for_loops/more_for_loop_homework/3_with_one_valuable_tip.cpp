#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for (int a = 1; a <= 200; ++a) {
        for (int b = 1; b <= 200; ++b) {
            for (int c = 1; c <= 200; ++c) {
                for (int d = 1; c <= 200; ++d) 
                    cnt += (a + b == c + d);    // the best way to use boolean without if condition
            }                                   // saving tremendous space
        }
    }
                                                // "we haven't got the answer"
    cout << cnt << "\n";                        // because the code is slow
                                                // try the next way 
    return 0;                                   // this shows what is simple code and 
}                                               // what is not
