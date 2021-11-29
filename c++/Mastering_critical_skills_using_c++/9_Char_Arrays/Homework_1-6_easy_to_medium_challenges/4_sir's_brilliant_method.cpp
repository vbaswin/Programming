#include <iostream>
using namespace std;

int main() {
    string big_str, small_str;
    cin >> big_str >> small_str;

    if (small_str.size() > big_str.size()) {
        cout << "NO\n";
        return 0;
    }

    int next_position = 0; // iterating over the big_str
    for (int i = 0; i < big_str.size(); ++i) {  
// check if all the values of small_str is present in big_str since 
// we are iterating big_str and checking, if the small str is not in 
// order with big_str then rest of the values of small_str will not 
// be present.So, next position which is 1-based due to ++next_pos
// will not be equal to small_str.size() and hence YES otherwise NO
        if (big_str[i] == small_str[next_position]) { 
            ++next_position; 
            if (next_position == (int) small_str.size()) { 
                cout << "YES\n"; 
                return 0;
            }
        }
    }


    cout << "NO\n";

    return 0;
}