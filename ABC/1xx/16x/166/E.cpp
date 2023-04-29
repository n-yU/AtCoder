#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<ll,ll> P;

int main() {
	ll N,A,r=0;
	cin >> N;
	vector<P> c(N);

	rep(i,N) {
		cin >> A;
		if(i-A >= 0)
			++c.at(i-A).second;
		if(i+A < N)
			++c.at(i+A).first;
	}

	rep(i,N)
		r += c.at(i).first*c.at(i).second;
	cout << r << endl;
}