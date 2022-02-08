/*****************************
 swap 3 numbers
 challenge do it in four lines
*****************************/


#include <iostream>
using namespace std;

int main()
{

    int numb1,numb2,numb3,temp = 1;

    cin >> numb1 >> numb2 >> numb3;
    
    temp  = numb1;
    numb1 = numb2;
    numb2 = numb3;
    numb3 = temp ;
    
    cout << numb1 << " " << numb2 << " " << numb3 << "\n";

    return 0;

}