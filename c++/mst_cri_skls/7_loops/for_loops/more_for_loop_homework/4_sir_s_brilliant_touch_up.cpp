/******************************************************************* 
Read an integer N(< 500) and print YES if it is prime, otherwise No
********************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    
    if (N <= 1)
        cout << "NO\n";
    else if (N == 2)            // it me a lot of time to figure out to put "==" than "="
        cout << "YES\n";        // costed me a ton of time - other wise I think it will put the 
                                // value of N directly as 2 and hence yes in all the inputs

    else {
        bool is_prime = true;   // most brilliant method use bool
                                // way easier to code and simplier code when using bool
        for (int i = 2; i < N; ++i) {
            if (N % i == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            cout << "YES\n";
        else    
            cout << "NO\n";
    }
    return 0;
}