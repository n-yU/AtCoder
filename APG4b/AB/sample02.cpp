#include <bits/stdc++.h>
using namespace std;

struct MyPair {
	int x;
	string y;
	void print() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	MyPair p = {12345, "Hello"};
	p.print();

	MyPair q = {67890, "APG4b"};
	q.print();
}