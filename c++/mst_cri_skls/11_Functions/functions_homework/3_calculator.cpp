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

double a, b;

void add(){
    cout << a + b << "\n";
}
void subtract(){
    cout << a - b << "\n";
}
void multiply() {
    cout << a * b << "\n";
}
void divide (){
    cout << a / b << "\n";
}

void read() {
    cout << "Enter the numbers: ";
    cin >> a >> b;
}

void menu(){
    int choice = -1, cnt = 0;
    while (true) {
        cout << "\nEnter the option: \n1) add \n2) subtract\n3) multiply\n";
        cout << "4) divide\n5) exit\n";
        cin >> choice;
        
        if (choice == 1)
            read(), add();
        else if (choice == 2)
            read(), subtract();
        else if (choice == 3)
            read(), multiply();
        else if (choice == 4)
            read(), divide();
        else if (choice == 5)
            break;
        else {
            cout << "incorrect input\n";
            continue;
        }
        ++cnt;
        cout << "\nNo of operations completed: " << cnt << "\n";
    }
}

int main() {
    menu();
}
