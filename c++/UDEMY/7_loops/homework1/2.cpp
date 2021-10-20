/************************************************ 
Read an integer N followed by a single character,
print the character N times.

input   output
5 Y     YYYYY
3 #     #####
*************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num;
    char value;

    cin >> num >> value;
   
    while (num > 0)
    {
        cout << value;
        --num;
    }

    return 0;
}