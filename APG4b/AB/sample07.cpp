#include <bits/stdc++.h>
using namespace std;

struct MyPair {
	int x;
	string y;
	MyPair operator+(const MyPair &other) {
		MyPair ret;
		ret.x = x + other.x;
		ret.y = y + other.y;
		return ret;
	}
};

int main() {
	MyPair a = {123, "hello"};
	MyPair b = {456, "world"};

	MyPair c = a + b;

	cout << "c.x = " << c.x << endl;
	cout << "c.y = " << c.y << endl;
}