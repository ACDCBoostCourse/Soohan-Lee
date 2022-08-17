#include<iostream>
#include <string>
using namespace std;

template <typename T>


class Queue {
private:
	T* arr;
	int size;
	int topCursor;
	int endCursor;

public:
	Queue() {
		size = 0;
		arr = new T[10000];
		topCursor = 0;
		endCursor = 0;
	}
	~Queue() {
		delete[]arr;
	}
	void push(int x) {
		arr[endCursor++] = x;
		size += 1;
	}
	void pop() {
		if (size != 0) {
			cout << arr[topCursor++] << endl;
			size -= 1;
		}
		else { cout << "-1" << endl; }
	}
	void size() {
		cout << size << endl;
	}
	void empty() {
		if (size == 0) {
			cout << "1" << endl;
		}
		else { cout << "0" << endl; }
	}
	void front() {
		if (size != 0) {
			cout << arr[topCursor] << endl;
		}
		else { cout << "-1" << endl; }
	}
	void back() {
		if (size == 0) {
			cout << "-1" << endl;
		}
		else if (size != 0) {
			cout << arr[endCursor - 1] << endl;
		}
	}
};

int main() {
	int input;
	cin >> input;
	Queue queue;
	string str;
	for (int i = 0; i < input; i++) {
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			queue.push(x);
		}
		else if (str == "pop") {
			queue.pop();
		}
		else if (str == "size") {
			queue.size();
		}
		else if (str == "empty") {
			queue.empty();
		}
		else if (str == "front") {
			queue.front();
		}
		else if (str == "back") {
			queue.back();
		}
	}

}
//모르겠습니당....


