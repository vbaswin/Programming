/* 
Find the max number of the two */

#include <iostream>
using namespace std;

int our_max(int a, int b) {
    if (a >= b)
        return a;
    return b;
}


int main() {
    int a , b;
    cin >> a >> b ;
    int result = our_max(a,b);
    cout << result << "\n";
    
    return 0;
}