#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int N,mn=100,mx=-100,r=INF;
	cin >> N;
	vector<int> a(N);
	rep(i,N) {
		cin >> a.at(i);
		mn = min(a.at(i),mn);
		mx = max(a.at(i),mx);
	}

	rep(i,mx-mn+1) {
		int t=mn+i, s=0;
		rep(j,N)
			s += (a.at(j)-t)*(a.at(j)-t);
		r = min(r, s);
	}

	cout << r << endl;
}