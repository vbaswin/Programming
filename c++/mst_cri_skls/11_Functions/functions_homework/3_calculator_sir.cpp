/*
 Calculator using sir's method
*/

#include <iostream>
using namespace std;

int menu() {
    int choice = -1;
    while (choice == -1) {
        cout << "\nEnter one of options\n1) add\n2) subtract\n3) multiply\n";
        cout << "4) divide\n5) exit\n";

        cin >> choice;
        if (!(1 <= choice && choice <= 5)) {
            cout << "Incorrect input\nTry again\n"; 
            choice = -1;
        } 
        else 
            return choice;
    }
    return 0;
}
void read (double &a, double &b) {
    cout << "Enter the numbers: \n";
    cin >> a >> b;
}

void add (double a, double b) {
    cout << "a + b = " << a + b;
}
void subtract (double a, double b) {
    cout << "a - b = " << a - b;
}
void multiply (double a, double b) {
    cout << "a * b = " << a * b;
}
void divide (double a, double b) {
    if (b != 0) 
        cout << "a / b = " << a / b;
    else
        cout << "cannot divide by 0\n";
}
int main() {
    double a, b;
    int cnt = 0;
    while (true) {
        int choice = menu();
        
        if (choice == 5)
            break;

        read(a, b);
        if (choice == 1)
            add(a, b);
        else if (choice == 2)
            subtract(a, b);
        else if (choice == 3)
            multiply(a, b);
        else
            divide(a, b);
        ++cnt;
        cout << "\n";

    }
    cout << "\nNo of operations completed: " << cnt << "\n";
    return 0;
}
