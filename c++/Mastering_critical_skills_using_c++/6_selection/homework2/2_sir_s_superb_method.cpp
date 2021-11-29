/*************************************************************************** 
Read an integer N (2 <= N <= 10)
Then read N integers, find which of them has the biggest value and print it
***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int N, first, num, max;
    
    cin >> N;
    cin >> first;
    max = first;
    N -= 1;

    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}
    if (N > 0) {cin >> num; N -= 1; if (num > max)  max = num;}

    cout << max << "\n";

    return 0;
}