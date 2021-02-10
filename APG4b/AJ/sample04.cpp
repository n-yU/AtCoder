#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = 123;

	int *p = &x;
	int *q = &x;

	if(p == q)
		cout << "p == q";
	else
		cout << "p != q";
	cout << endl;
}