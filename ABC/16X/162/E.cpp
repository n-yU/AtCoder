#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;

int main() {
	ll N,K,r=0;
	cin >> N >> K;
	vector<ll> dn(K);

	rep(i,K)
		dn.at(i) = K/(i+1);

	rep(i,K) {
		ll t=1;
		rep(j,N-1) {
			t *= dn.at(i);
			t %= MOD;
		}
		r += ((t*2-1)*(i+1))%MOD;
		r %= MOD;
		cout << t << " " << r << endl;
	}

	cout << r << endl;
}

// 最小値がxで, その他がxでも割れる数 * x = (gcd()=x)となるものの和？