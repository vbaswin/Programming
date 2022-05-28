#include <iostream>
using namespace std;

template<typename T, int SIZE>
struct MyItems {
    T items[SIZE];
    int len = 0;

    void add(T item) {
        items[len++] = item;
    }

    bool exists(T item) {
        for (int i = 0;i < len; ++i) {
            if (items[i] == item)
                return true;
        }
        return false;
    }
};

int main() {
    MyItems<string, 10> items;
    items.add("mostafa");
    items.add("saad");
    items.add("ibrahim");

    char arr[] = "mostafa";
    cout << items.exists(arr) << "\n";

    return 0;
}
