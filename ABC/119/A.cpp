#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string S;
	cin >> S;

	t = (S.at(5)-'0')*10 + (S.at(6)-'0');

	if(t < 5)
		cout << "Heisei";
	else
		cout << "TBD";
	cout << endl;
}