/*******************************************
Reading string with spaces

Based on data types, you can read in 2 ways
>>==>> we typically use string
*******************************************/

#include <iostream>
using namespace std;

int main() {
    string name1;
    getline(cin, name1);
    cout << name1 << "\n";

    char name2[50];
    cin.getline(name2, 50);
    cout << name2 << "\n";

    return 0;
}