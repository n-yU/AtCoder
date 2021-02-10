#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=2e9;

int main() {
	int N,K,r=INF;
	cin >> N >> K;
	vector<int> h(N);
	rep(i,N)
		cin >> h.at(i);
	sort(h.begin(), h.end());

	rep(i,N-K+1)
		r = min(r, h.at(i+K-1)-h.at(i));

	cout << r << endl;
}