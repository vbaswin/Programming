/*****************************************************************************************************
short circuit evaluation

operator precedence is = > & > || : so and will be evaluated first
The condition is if any of the 'and' condition is false, the other condition will be skipped similarly 
                 if any of the 'or' condition is true, the other condition will be skipped.
******************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{

    {int x = 10; 

    cout << ((x < 100) || (x += 50 > 10)) << "\n";  // (x += 50 > 10) is discarded as first is true  
    cout << (x == 20 && ++x > 50) << "\n";          // x > 50 is discarded as first is false  
    cout << (x == 20 && ++x > 50 || x > 0) << "\n"; // ++x > 50 is discarded but x > 0 is evaluated
    cout << (x == 10 && ++x > 50 || x > 0) << "\n\n"; // all are evaluated
    cout << x << "\n";

    // in all, the ++x is discarded except the last so the last is only incremented 
    }

    {// don't compare doubles with '==' as internal values are approximations eg;

    double y = 0.1;
	cout << (y == 1 + y - 1) << "\n\n" ; // ans hard to tell whether the double values are rounded or not 
    }
    
    {//bool can also be written as;

    int z {20};

    z < 100 || (z+ 50 > 10);   // ans is 20 21 as (z+ 50 > 10) is not evaluated due to short_circuit_evaluation
    cout << z << " ";

    (z > 10) && ( (++z > 50) || (z > 0) ); // here ++z is evaluated 
    cout << z << " ";

    }
    return 0;
}