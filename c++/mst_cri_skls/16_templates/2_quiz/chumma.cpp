#include <iostream>
using namespace std;

void display(char a) {
    cout << "char"; 
}

void display(string str) {
    cout << "string"; 
}

int main() {
    display("mostafa");
}
