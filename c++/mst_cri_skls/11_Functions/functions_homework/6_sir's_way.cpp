#include <iostream>
using namespace std;

bool is_prime(int num) {
    for (int i = 2; i < num; ++i) 
        if (num % i == 0) 
            return false;
    return true;
}

int nth_prime(int n) {
    int nature, i;
    for (i = 2;n > 0; ++i) {
        nature = is_prime(i); 
        if(nature)
            --n;
    }
    return --i;
}

int main() {
    int n;
    scanf("%d", &n);
    int i = nth_prime(n);
    cout << i << "\n";
    return 0;
}
