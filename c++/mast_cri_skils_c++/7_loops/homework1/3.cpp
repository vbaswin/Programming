/**************************************************************** 
Read integer N, then print a left angled tringle that has N rows 

5
*
**
***
****
*****
*****************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int row = 1;                    // we don't need to take another variable as row
                                    // but it will be better to follow this case for future use
    while (row <= num)
    {
        int star_count = 1;
        while (star_count <= row)
        {
            cout << '*';
            ++star_count;
        }
        cout << "\n";
        ++row;
    }

    return 0;
}