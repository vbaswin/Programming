/***** 
3:quiz
*****/

#include <iostream>
using namespace std;

int main() {
    char str[] {"abcdef"};
    int cnt = 0;

    for (int i = 0; i < 6; ++i) {
        cnt += str[i] - 'a'; // sum the differences 0 + 1 + 2 + 3 + 4 + 5
    }

    cout << cnt << endl;
    return 0;
}