#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K,r=0;
	cin >> N >> K;
	vector<int> l(N);

	rep(i,N)
		cin >> l.at(i);
	sort(l.begin(), l.end(), greater<int>());

	rep(i,K)
		r += l.at(i);
	
	cout << r << endl;
}