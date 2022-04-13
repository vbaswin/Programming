/*
    Constructor
*/
#include <iostream>
using namespace std;

struct full_name {
    string first, middle, last;

    full_name() {
        // empty constructore better always provide it
        first = middle = last = "";
    }
    
    // string last = "" because this constructor will be true for one paramater 
    // or more no need to specify different parameters for one and 2 :)
    // change "" to string to understand
    full_name(string _first, string _last = "") {  
        first = _first;
        last = _last;
        middle = "";
    }
};

int main() {
    // full_name hi;  // chumma :)
    // cout << hi.first  << hi.middle << hi.last << "\n";

    full_name my_name = full_name("ali");
    cout << my_name.first  << my_name.middle << my_name.last << "\n";

    full_name his_name = full_name("mustafa", "ibrahim");
    cout << his_name.first  << his_name.middle << his_name.last << "\n";

    return 0;
}
