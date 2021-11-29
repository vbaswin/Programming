/*********************
iteration => ++a & a++
*********************/

#include <iostream>
using namespace std;

int main()
{

    int a,b;
    
    {// ++ increment

    a = 10;
    b = 5;

    cout << ++a << "\n";
    cout << a++ << "\n";
    cout << ++b << "\n";
    cout << b++ << "\n\n";

    a,b;
    a = 2;
    b = ++a;

    cout << a << " " << b << "\n";

    a = 2;
    b = a++;

    cout << a << " " << b << "\n\n";

    a,b;
    a = 5;
    b = 10;

    cout << a + 5 + b << "\n";
    cout << ++a + 5 + b++ << "\n\n\n"; // 1
    
    // in 1, the ans is 21 because we will be getting 1 from incremented then a
    // and last b then integrated so we won't get the 1 from it as the next b will be the incremented one 
    }
    

    {// -- increment

    a = 10;
    b = 5;

    cout << --a << "\n";
    cout << a-- << "\n";
    cout << --b << "\n";
    cout << b-- << "\n\n";

    a,b;
    a = 2;
    b = --a;

    cout << a << " " << b << "\n";

    a = 2;
    b = a--;

    cout << a << " " << b << "\n\n";

    a,b;
    a = 5;
    b = 10;

    cout << a + 5 + b << "\n";
    cout << --a + 5 + b-- << "\n";

    // in 1, the ans is 19 because we will be losing 1 from  a
    // and last b then decremented so we won't losing the 1 from it as the next b will be the decremented one 

    }
    return 0;

}