#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

int main() {
	int N,K,a=INF;
	cin >> N >> K;
	vector<int> x(N);
	rep(i,N)
		cin >> x.at(i);
	
	rep(i, N-K+1) {
		int l=x.at(i), r=x.at(i+K-1);
		if(abs(l) < abs(r))
			a = min(a, abs(l)+r-l);
		else
			a = min(a, abs(r)+r-l);
	}

	cout << a << endl;
}