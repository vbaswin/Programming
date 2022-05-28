#include <iostream>
using namespace std;

int global_var = 0;

template<typename T>
void increment_me(T x) {
    static int i = 0;
    cout << ++i << " " << ++global_var << "\n";
    return;
}

int main() {
    increment_me(5);
    increment_me(5);
    increment_me(5);

    increment_me(2.4);
    increment_me(2.4);
    increment_me(2.4);
}
