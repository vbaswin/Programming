/****** 
2: quiz 
******/

#include <iostream> 
using namespace std;

int main() {

    string str = "abc";

    str[0] += 'A' - 'a'; // -a reduces the underlying number to 0
    str[1] += 'A' - 'a'; // then adding A transfers that number + number
    str[2] += 'A' - 'a'; // of A since b has a extra value it transilates
                         // to B and the same for C   
    cout << str << endl;

    return 0;
}
