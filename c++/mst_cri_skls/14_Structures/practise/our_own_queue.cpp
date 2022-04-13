/*
    Practice: Our own queue
    
    Define a class, name it queue. It should internally have an array and support
    following operations

    void add_end(int value): add to the end of current array
    void add_front(int value): add to the front of this array
    int remove_front(): remove the front value and remove it. Return the value
    void print(): print the array
*/

#include <iostream>
using namespace std;

struct queue {
    int arr[100];
    int len;

    queue() {
        len = 0;
    }

    void add_end(int n) {
        arr[len++] = n;
    }
    void add_front(int n) {
        // shift right
        for (int i = len++; i > 0; --i) 
            arr[i] = arr[i-1];
        arr[0] = n;
    }
    int  remove_front() {
        int tmp = arr[0];
        //shift left
        for (int i = 0; i < len-1; ++i)
            arr[i] = arr[i +1];
        --len;
        return tmp;
    }
    void print() {
        for (int i = 0; i < len; ++i)
            cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    queue my_queue;

    my_queue.add_end(10);
    my_queue.add_end(20);
    my_queue.add_end(30);
    my_queue.print();

    my_queue.add_front(1);
    my_queue.add_front(4);
    my_queue.print();

    cout << my_queue.remove_front() << "\n";

    return 0;
}
