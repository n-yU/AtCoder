#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	int c = 0;
	cin >> S;

	for(int i=0; i<6; ++i)
		c += S.at(i)-'0';
	cout << c << endl;
}