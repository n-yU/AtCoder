#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	string S,T;
	cin >> S >> T;

	if(S.at(0) == 'B')
		a = -(S.at(1)-'0')+1;
	else
		a = S.at(0)-'0';
	if(T.at(0) == 'B')
		b = -(T.at(1)-'0')+1;
	else
		b = T.at(0)-'0';

	cout << abs(a-b) << endl;
}