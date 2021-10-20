/*************************************** 
ACCESSING STRING ARRAY

We used to read/write string as an item
>>=>> String is sequence of characters
>>=>> So actually internally an array
***************************************/

#include <iostream>
using namespace std;

int main() {
    string name = "Hany";

    int sz = name.size(); // called function/method
    cout << sz << "\n";   // 4

    cout << name << "\n";

    for (int i = 0; i < sz; ++i) 
        cout << name[i] << " "; // internally array

    cout << endl;
    return 0;
    
}