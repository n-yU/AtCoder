#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;

int main() {
	ll N,K,r=0,mn=0,mx=0;
	cin >> N >> K;

	rep(i,K) {
		mn += i;
		mx += N-i;
	}

	rep(i,N-K+2) {
		r += mx-mn+1;
		r %= MOD;

		mx += N-K-i;
		mn += K+i;
	}

	cout << r << endl;
}