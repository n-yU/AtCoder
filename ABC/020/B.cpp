#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int r=0;
	string A,B;
	cin >> A >> B;
	A += B;

	rep(i,A.size())
		r += (A.at(i)-'0')*pow(10,A.size()-1-i);
	cout << r*2 << endl;
}