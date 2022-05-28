#include <iostream>
using namespace std;

int main() {
    string str = "aswin";
    // cout << str * 3 << "\n";  //  will give error as string 
    // cannot be multiplied by an integer
    cout << str + str << "\n";
    return 0;
}
