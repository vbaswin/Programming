/*******************
relational operators
*******************/

#include <iostream>
using namespace std;

int main()
{
    {// practise don't forget the brackets
    cout << (3 >  5) << "\n"; 
    cout << (3 <  5) << "\n"; 
    cout << (3 == 5) << "\n"; 
    cout << (3 >= 5) << "\n"; 
    cout << (3 >= 3) << "\n"; 
    cout << (3 == 3) << "\n"; 
    cout << (3 >  1) << "\n"; 
    cout << (3 != 4) << "\n"; 
    cout << (3 != 3) << "\n\n"; }

    int x,y;

    cin >> x >> y;

    {//using variables
    cout << "\n\n";
    cout << ( x > y) << "\n";
    cout << ( x < y) << "\n";
    cout << ( x >= y) << "\n";
    cout << ( x <= y) << "\n\n";}

    {//using bool
    bool result = ( x > y );
    cout << result << "\n";

    result = ( x < y );
    cout << result << "\n";

    cout << !result << "\n";
    cout << !( x < y ) << "\n"; }

    {//using strings
    string name1 = "ali" , name2 = "ali mustafa";
    string name3 = "ziad", name4 = "ali" , name5 = "ALI";

    //comparison based on names sorted in dictionary

    cout << "\n\n";
    cout << (name1 <  name2 ) << "\n";
    cout << (name1 >  name3 ) << "\n";
    cout << (name1 != name4 ) << "\n";
    cout << (name1 == name4 ) << "\n";
    cout << (name1 == name5 ) << "\n";
    cout << (name1 >  name5 ) << "\n"; //uppercase comes first in dictionary so upper case < lower case 
    }

    {//using double
    double a = 3.0 / 7.0;
    double b = 1 + 3.0 / 7.0 -1 ;

    cout << a << " " << b << " " << (a == b) << "\n"; // ans 0 as c++ approximates real values
                                                      // so, we do not compare them directly ie; a and b
                                                      // never compare doubles for equality directly
    a = 5, b= 4.999999999999999;
    cout << a << " " << b << " " << (a == b) << "\n";
    }

    return 0;

}