/* 
function name shouldn't have slash use underscore
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << abs(-2) << "\n";
    cout << fabs(-2.4) << "\n"; // don't know why this fn for
    cout << ceil(2.4) << "\n";
    cout << floor(2.4) << "\n";
    cout << round(2.4) << "\n";
    cout << round(2.5) << "\n";
    cout << round(2.6) << "\n";
    cout << round(-2.6) << "\n";
    cout << ceil(-2.4) << "\n";
    cout << floor(-2.4) << "\n";
    cout << sqrt(9) << "\n";

    cout << isalpha('A') << "\n"; // 1024 => true 
    cout << isalpha('#') << "\n"; // 0

    cout << isdigit('3') << "\n"; // 1 => true

    cout << isupper('A') << "\n"; // isupper does not return bool
    cout << isupper('a') << "\n"; // it gives value != 0

    cout << (char)tolower('X') << "\n"; // to output the value in char
    cout << (char)toupper('x') << "\n";

    cout << max(5, 9) << "\n";
    cout << pow(2, 4) << "\n"; // 2^4
    cout << pow(2, 4.1) << "\n";

    cout << log2(16) << "\n";
    cout << log10(1000) << "\n";

    cout << (double)rand() / RAND_MAX << "\n"; // some no: 0 and 1
    return 0;
} 