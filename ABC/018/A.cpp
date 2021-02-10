#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;

	if(A > B) {
		if(B > C) {
			cout << 1 << endl << 2 << endl << 3;
		} else {
			if(A > C)
				cout << 1 << endl << 3 << endl << 2;
			else
				cout << 2 << endl << 3 << endl << 1;
		}
	} else {
		if(A > C) {
			cout << 2 << endl << 1 << endl << 3;
		} else {
			if(B > C)
				cout << 3 << endl << 1 << endl << 2;
			else
				cout << 3 << endl << 2 << endl << 1;
		}
	}
	cout << endl;
}