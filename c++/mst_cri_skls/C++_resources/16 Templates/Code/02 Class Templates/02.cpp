#include <iostream>
using namespace std;

template<typename T, int SIZE>
struct MyQueue {
	T arr[SIZE];
	int pos;

	MyQueue() {		pos = 0;	}
	MyQueue(T param_arr[], int len) {
		for (int i = 0; i < len; ++i)
			arr[i] = param_arr[i];
		pos = len;
	}
	void add_front(T elem) {
		arr[pos++] = elem;
	}

	template<typename Type>
	void sum_and_add(Type a, Type b) {
		arr[pos++] = a + b;
	}

	void print() {
		for (int i = 0; i < pos; ++i)
			cout << arr[i] << " ";
		cout<<"\n";
	}
};

int main() {
	MyQueue<string, 10> q_str;
	q_str.add_front("mostafa");
	q_str.add_front("saad");
	q_str.print();	// mostafa saad

	MyQueue<int, 12> q_dob;
	q_dob.add_front(3);
	q_dob.add_front(2);
	q_dob.sum_and_add<double>(2.5, 3.9);
	q_dob.print();	// 3 2 6

	return 0;
}
