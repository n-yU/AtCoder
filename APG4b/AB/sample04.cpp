#include <bits/stdc++.h>
using namespace std;

struct NumString {
	int length;
	string s;
	NumString(int num) {
		cout << "constructor called" << endl;

		s = to_string(num);
		length = s.size();
	}
};

int main() {
	NumString num(12345);
	cout << "num.s = " << num.s << endl;
	cout << "num.length = " << num.length << endl;
}