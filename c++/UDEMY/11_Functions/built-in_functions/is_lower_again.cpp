#include <iostream>
using namespace std;

/* why const : due to c++ rule => if you would like to 
assign some varible (temporary varible) to a varible with 
reference, it must be const */
bool is_lower(const string &str) {
    for (int i = 0; i < str.size(); i++) {
        bool lower = islower(str[i]);

        if(!lower)
            return false;
    }
    return true;

}

int main() {
    string str;
    cin >> str;
    cout << (int)str.size() << "\n";
    /* cout << is_lower("aBc") << "\n"; this is what sir did, 
    don't know if this is what he mean't by temporary variable*/
    cout << is_lower(str) << "\n";

    return 0;
}