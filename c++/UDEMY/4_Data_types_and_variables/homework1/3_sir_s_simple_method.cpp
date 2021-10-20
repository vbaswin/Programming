/***************************************************************************************
Given 8 space-separated integers, find the sum of those in even places and
the sum of those in odd places
     * note: 8 numbers will be on the same line
     * don't print any welcome or by messages
input: 11 2 7 9 12 -8 3 -1
output: 2 33

same question but sir's simple way
***************************************************************************************/

#include <iostream>
using namespace std;

int main()


{

    int odd1, odd2, odd3, odd4, even1, even2, even3, even4;

    cin >> odd1 >> even1 ;
    cin >> odd2 >> even2 ;
    cin >> odd3 >> even3 ;
    cin >> odd4 >> even4 ;

    int odd_sum1 = odd1 + odd2 + odd3 + odd4 ;
    int even_sum1 = even1 + even2 + even3 + even4 ;

    cout << odd_sum1 << " " << even_sum1 ;

    return 0;


}