/* 
Homework 3: Calculator

Develop a function that allows user to do the following (menu options):
    Add 2 numbers
    Subtract 2 numbers
    Multiply 2 numbers
    Divide 2 numbers
    End the program
Consider the following functions:
    ~> Function to read 2 double numbers - by reference
    ~> 4 functions, one for each operation. Don’t divide by zero!
    ~> Function to display the menu of the 5 options - read number and return it.
        ■ User should enter number from 1 to 5. If not, display error message
        ■ If exit, end the program by printing how many operations were done
*/

#include <iostream>
using namespace std;

int menu() {
    int choice = -1;
    
}

int main() {
    int a, b;
    cin >> a >> b;
    menu(a, b);
}