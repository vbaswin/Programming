/*************************************************************************************************
Order of precedence : operator precedence order { (++ -- !) , (* / % + -) ,  (= += -= *= /= %=) }
    
Order of assiciativity : Operator associativity: - how to group operands of equal priority 
Left to right : * / % + -
Right to left : = += -= *= /= %=

Order of evaluation : compiler can evaluate operands and other subexpressions in any order
**************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{

    bool is_valid_file {false};

    cout << !is_valid_file << "\n";

    int a = 0;

    cout << (a++, ++a ,a++ , ++a , a++) << "\n"; // the comma operator evaluates from left to right, return the last after-comma result.
                                                 // This is a bad coding style. Avoid changing the variable in an expression unless there is a reason and you really know it is defined behaviour.  

    
    return 0;

    
}