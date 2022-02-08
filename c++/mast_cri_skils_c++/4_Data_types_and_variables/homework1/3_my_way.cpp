/***************************************************************************
Given 8 space-separated integers, find the sum of those in even places and
the sum of those in odd places
     * note: 8 numbers will be on the same line
     * don't print any welcome or by messages
input: 11 2 7 9 12 -8 3 -1
output: 2 33
***************************************************************************/

#include <iostream>
using namespace std;

int main() {

    int odd1, odd2, odd3, odd4, even1, even2, even3, even4;

    cin >> odd1 >> even1 >> odd2 >> even2 >> odd3 >> even3 >> odd4 >> even4 ;

    int odd_sum = odd1 + odd2 + odd3 + odd4 ;
    int even_sum = even1 + even2 + even3 + even4 ;

    cout << even1 << " + " << even2 << " + " << even3 << " + " << even4 << " = " <<even_sum << "\n" ;
    cout << odd1  << " + " << odd2  << " + " << odd3  << " + " << odd4  << " = " <<odd_sum  << "\n" ;

    cout << "\n";

    return 0;
}
