#include <iostream>
using namespace std;

// this is needed when the args becomes 0 to terminate recursion
// base case function
int sum() {
    return 0;
}

template<typename ... Args>
// args is just like a in int a so it is just for the function
int sum(int a ,Args ... args) {
    return a + sum(args...);
}

int main() {
    cout << sum(1,2,3,4,5) << "\n";
    return 0;
}

/*
   sum(1,2,3,4)
   1+sum(2,3,4)
   1+2+sum(3,4)
   1+2+3+sum(4)
   1+2+3+4+sum()

   It is a RIGHT FOLD expansion
   (1 + (2 + (3 + (4 + ()))))
*/
