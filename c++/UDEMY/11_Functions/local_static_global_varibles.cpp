/* 
The space for the static variable is allocated only one time
and this is used for the entirety of the program.
>>==>> initialized or defined only once
 */
#include <iostream>
using namespace std;

int global_val {10};

void fun() {
    int i1 {0};  // local variable 
    int i2;      // local: garbage
    int i3 {}; /* value is initialized to be 0 */
    static int si {0}; /* static varible updates its value to
    the last given value >>==>> it will not initialize like local 
    varible (eg: i1) all the time it is called, it needs to be 
    initialised or defined only once */

    ++i1, ++si;
    global_val += 10;
    cout << i1 <<  " " << i2 << " " << si << " " << global_val << "\n";
}

int main() {
    fun(), fun(), fun();
    cout << global_val << "\n";

    return 0;
}

/* 
1 0 1 20
1 0 2 30
1 0 3 40
40
*/

/* 
>> Global and static variables are initialized to their default values
    Which is zero
    nullptr for pointers (later)
>> A global variable is visible from its point of declaration to 
     end of file
    > Don’t access it before that
>> In practice: using static local variables or global variables 
    --> not welcomed
*/