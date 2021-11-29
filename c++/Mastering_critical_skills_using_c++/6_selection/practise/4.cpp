#include <iostream>
using namespace std;

int main()
{

    int val{-5};
    if (val)        // val is not 0 so true hence 1 will be printed
        cout << 1;  

    cout << "bye\n";


    int t = 2*3 - 6;

    if (t == 0)     // Not yes as t = 0 is an assignment hence t = 0 is false and thus goes to the second condition
        cout << "Yes\n"; 
    else 
        cout << "Ooh\n";


    return 0;
}