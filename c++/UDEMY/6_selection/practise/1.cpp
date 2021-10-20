/************
if conditions
************/

#include <iostream>
using namespace std;

int main()
{

    int salary;
    cin >> salary;

    if (salary < 1000)   // if (true) then only this will be executed;
        cout << "you are poor" << "\n";

    cout << "salam" << "\n";

    int num;
    cin >> num;

    if (num == 10) // scope of a variable
    {

        int x = 3;    // this is applicable only inside this parentesis outside there is no int x; 
        cout << "10 is my lucky number" << "\n";
        cout << "also " << 2 * num + x << "\n"; 
    }

    return 0;

}