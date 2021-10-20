/*******************************************************************************
double char bool int string

The maximun number we can input in each types is :

integer : -2147483648 to 2147483648
character : -127 to 127
bool : 0 to 1
If you tried lower value  = underflow
bigger value = overflow
integer value greater than this 2147483648 ie even +1 will give the error_value 
*******************************************************************************/


#include <iostream>
using namespace std;

int main()
{

    double weight = 34.5;
    char group = 'd';

    bool is_male = true;
    bool is_like_football = false;
    
    int age = 66;
    string name = "mustafa.";

    cout << "I am "<< age << " years old"<<"\n";
    cout << "My weight is "<< weight <<"\n";
    cout<< "\nMy name is " << name <<"\nand my group is "<< group <<"\n"<<is_male <<"\n"<<is_like_football<<"\n";
    
    return 0;
}





