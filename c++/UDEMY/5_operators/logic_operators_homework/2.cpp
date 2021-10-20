/**************************************************************
Read three integers about the class room 
    * no of boys (nb)  * no of girls (ng)  * no of teachers (nt)
prepare and print boolean variable for all the cases
***************************************************************/

#include <iostream>
using namespace std;

int main()
{

    int nb, ng, nt;

    cin >> nb >> ng >> nt;

    cout << (nb > 25) << "\n";
    cout << (nb <= 30) << "\n";
    cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";
    cout << (nb < 60 || ng < 70) << "\n";               // either or  - OR
    cout << (!(nb >= 60) && !(ng >= 70)) << "\n";       // neither nor- AND 
    cout << (nb == 10 + ng) << "\n";
    cout << (nb - ng > 10 || nt > 5) << "\n";
    cout << (nb == 10 + ng || ng == 15 + nb) << "\n";
    
    return 0;}