/************************************************************************** 
Read integer N (<= 900), followed by reading N integers (0 <= value <= 500)
Print the unique list of the numbers, but preserve the given order

input : 13  1 5 5 2 5 7 2 3 3 3 5 2 7
output: 1 5 2 7 3
    ~> input in not a sorted list
    
Don't use nested loops
****************************************************************************/

#include <iostream>
using namespace std;

int main() {
    const int N = 501;
    int n, value, visited[N] {0};

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> value;

        if (!visited[value]) {      // if value is not visited as the value
            visited[value] = 1;     // will be 0 so true outputs value
            cout << value << " ";   // and convert the index value to 1
        }
    }

    cout << endl;
    return 0;
}