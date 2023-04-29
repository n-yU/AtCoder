#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,K,s=0;
	cin >> N >> K;
	vector<int> p(N);

	rep(i,N)
		cin >> p.at(i);
	sort(p.begin(), p.end());

	rep(i,K)
		s += p.at(i);
	cout << s << endl;
}