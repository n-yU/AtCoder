#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,X,r=0;
	cin >> N >> X;
	vector<int> a(N);
	rep(i,N)
		cin >> a.at(i);

	rep(i,N)
		if(X & 1<<i)
			r += a.at(i);
	cout << r << endl;
}