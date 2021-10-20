/********************************************************
 * mostly on division by 10 which removes the last number
********************************************************/


#include <iostream>
using namespace std;

int main()
{
    #pragma region // importance of decimal points while division
    int num = 12345;

    cout << num/10      << "\n"; 
    cout << num/100     << "\n";                
    cout << num/1000    << "\n";
    cout << num/10000   << "\n";
    cout << num/100000  << "\n";

    cout << "********"  << "\n"; 

    cout << num/10.0    << "\n";
    cout << num/100.0   << "\n";
    cout << num/1000.0  << "\n";
    cout << num/10000.0 << "\n";
    cout << num/100000.0<< "\n\n";
    #pragma endregion

    #pragma region //conversions

    double numb = 8/3.0;

    cout << numb << "\n";

    int result = (int)numb; // casting here double to int
    cout << result << "\n";

    char ch = 'a';
    int ch_value = (int)ch ;
    
    cout << ch_value << "\n";

    cout << (int)'a' << " " << (int)'z' << "\n";
    cout << (int) 'A' << " " << (int)'Z' << "\n"; 

    #pragma endregion 
    
    return 0;

}