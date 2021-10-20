#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;

    bool first_num = true;          // what a beautiful trick just look at it and amaze - no words

    for (int num = 2; num <= N; ++num) {    // taking each no from start to last 
        bool is_prime = true;               
        for (int i = 2; i < num; ++i) {     // checking each no to be prime or not
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            if (!first_num)
                cout << ",";        // comma condition first so only the first time the condition 
            cout << num;            // is false all other time it is true with comma not atleat

            first_num = false;      // brilliance
        }
    }

    cout << "\n";
    return 0;
}
 