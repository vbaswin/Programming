/*****************
logical operators
****************/

#include <iostream>
using namespace std;

int main()
{

    int age = 30, salary = 7000;

    bool result = (age > 25) && (salary < 8000);
    cout << result << "\n";

    cout << ( (age > 25) && (salary > 9000) ) << "\n"; // if we are directly using instead of the above method use the brackets carefully
    cout << ( (age > 35) || (salary < 8500) ) << "\n";
    cout << ( (age > 35) || (salary > 9000) ) << "\n`\n";

    int age1 = 30, salary1 = 7000, weight1 = 110;

    cout << ( (age1 > 25) && (salary1 < 8000) && (weight1 < 150) ) << "\n";
    cout << ( (age1 > 25) && (salary1 < 8000) && (weight1 > 200) ) << "\n";
    cout << ( (age1 > 35) || (salary1 < 6000) || (weight1 > 200) ) << "\n";
    cout << ( (age1 > 35) && (salary1 > 6000) || (weight1 > 200) ) << "\n";
    cout << ( (age1 > 20) && (salary1 > 6000) || (weight1 < 150) ) << "\n\n";

    cout << ( age1 > 35 || salary1 > 6000 && weight1 > 200 ) << "\n"; // priority and > or so and evaluated first then or 
    cout << ( (age1 > 35 || salary1) > 6000 && weight1 > 200 ) << "\n"; // Here () is evaluted first before and

    // So priority order () > AND > OR

    return 0;
}