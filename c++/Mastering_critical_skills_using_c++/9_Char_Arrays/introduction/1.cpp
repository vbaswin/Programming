/***************************** 
Let's refresh about characters
******************************/

#include <iostream>
using namespace std;

int main() {
    char ch1 = 'A'; // simple character
    int ch_value = ch1; // character converted to number 

    cout << ch1 << endl;
    cout << ch_value << endl;
    cout << endl;

    cout << 'A'      << endl;
    cout << (int)'A' << endl;
    cout << (int)'B' << endl;
    cout << (int)'C' << endl;
    cout << (int)'Z' << endl;
    cout << (int)'A' + 26 - 1 << endl;                          

    cout << "***\n";

    cout << (int)'a' << "\n";
    cout << (int)'b' << "\n";
    cout << (int)'c' << "\n";
    cout << (int)'z' << "\n";
    cout << (int)'a' + 26 - 1 << "\n";
    cout << endl;

    cout << ('A' < 'a') << "\n"; // bool true so 1
    cout << ('A' > 'a') << "\n";
    return 0;
}