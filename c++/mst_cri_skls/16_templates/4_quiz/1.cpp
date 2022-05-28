/*
   MyQueue is a class template not a class.
   MyQueue<int> is a class that the compiler will generate
*/

#include <iostream>
using namespace std;

template<typename T> //  class or typename both are same
struct MyQueue {
    T arr[100];
};

int main() {
    MyQueue<int> x;
    return 0;
}
