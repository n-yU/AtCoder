#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C;
	cin >> A >> B >> C;

	if(B==0 && A==C)
		cout << '?';
	else if(A+B==C && A-B!=C)
		cout << '+';
	else if(A+B!=C && A-B==C)
		cout << '-';
	else
		cout << '!';
	cout << endl;
}