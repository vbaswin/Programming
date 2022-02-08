/**********************************************************************
Read 10 integers, find which of them has the biggest value and print it
**********************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int start, num;

    cin >> start;

    // read nine times and maximise
    cin >> num;     if (start < num)    start = num; 
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;
    cin >> num;     if (start < num)    start = num;

    cout << start << "\n";

    return 0;
}