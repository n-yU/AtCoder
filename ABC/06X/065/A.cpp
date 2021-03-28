#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,A,B;
	cin >> X >> A >> B;
	if(A-B>=0)
		cout << "delicious";
	else if(B-A<=X)
		cout << "safe";
	else
		cout << "dangerous";
	cout << endl;
}