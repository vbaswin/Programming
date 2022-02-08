/**********************************************************
Read an integer and print if it has 1, 2, 3, 4 or 5+ digits
input 556
output 3 digits

also about nested if conditions
2 if statements on the same section
**********************************************************/

#include <iostream>
using namespace std;

int main()
{
    #pragma region digit
    int num; 
    cin >> num;

    if (num < 10)
        cout << "1 digit" << "\n";
    else if (num < 100)
        cout << "2 digit" << "\n";
    else if (num < 1000)
        cout << "3 digit" << "\n";
    else if (num < 10000)
        cout << "4 digit" << "\n";
    else 
        cout << "5 digit or more" << "\n";
    #pragma endregion

    #pragma region salary
    int salary;

    cout << "Enter salary : ";
    cin >> salary ;

    if (salary < 1000)
    {
        int age;                        
        cout << "Enter your age : ";
        cin >> age;

        if (age < 22)               // Nested if conditions if statements inside another if statement.
            cout << "You are still young." << "\n"; 
    }
    else 
        cout << "You are rich\n";
    #pragma 

    #pragma endregion

    #pragma region 2 if statements for the same thing satisfies the condition both are read
    int x {5};

    if (x < 10)
        cout << 1;
    if (x < 20)
        cout << 2 << "\n";

    #pragma endregion
 
    #pragma region ; after ; it is not considered under if condition
    
    int y{25};
    if (y < 10);  // here whatever it is always prints 1 as there is a collon at last of if condition
        cout << "1";
    if (y < 20)
        cout << "2";
    else 
        cout << "3";

    #pragma endregion
    
    return 0;
}
