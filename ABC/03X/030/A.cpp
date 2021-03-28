#include <bits/stdc++.h>
using namespace std;

int main() {
	double A,B,C,D;
	cin >> A >> B >> C >> D;
	
	if(B/A > D/C)
		cout << "TAKAHASHI";
	else if(B/A == D/C)
		cout << "DRAW";
	else
		cout << "AOKI";
	cout << endl;
}