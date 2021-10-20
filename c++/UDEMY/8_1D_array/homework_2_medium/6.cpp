/************************************************************************** 
Read integer N (<= 900), followed by reading N integers (0 <= value <= 500)
Print the sorted list of the numbers

input : 13  1 5 5 2 5 7 2 3 3 3 5 2 7
output: 1 2 2 2 3 3 3 5 5 5 5 7 7

"COUNT SORT ALGORITHM"
****************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const int N = 501;
    int n, value, frequency[N] {0}; // don't forget this step

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        frequency[value]++;
    }

    for (int i = 0; i < 501; ++i) {
        if (frequency[i]) {                             // you can skip this
            for (int j = 0; j < frequency[i]; ++j) {    // step by doing
                cout << i << " ";       // for condititon frequency[i]
            }                           // and --frequency[i] i neglected this
        }                               // to make it my sole thinking 
    }                                   // no helping hand from sir

    cout << endl;
    return 0;
}
