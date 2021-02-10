#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	string N;
	int s=0;
	cin >> N;

	rep(i,N.size())
		s += N.at(i)-'0';

	if(stoi(N)%s == 0)
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}