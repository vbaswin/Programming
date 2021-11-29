/* 
We can also send strings! But copying a big string
just takes a lot of time? More wise use & 
    ■ string &str
 */
#include <iostream>
using namespace std;

// while using parameters to functions use const values
// to not make the values correct 
bool is_lower(const string &str) {
    for (int i= 0; i < str.size(); i++) {
        bool lower = 'a' <= str[i] && str[i] <= 'z';

        if(!lower)
            return false;
    }
    return true;
}

int main() {
    string name;
    cin >> name;

    cout << std::boolalpha << is_lower(name) << "\n"; 
    // :) chumma oru rasam
    return 0;
}