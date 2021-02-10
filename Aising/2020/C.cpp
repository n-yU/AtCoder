#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N;
	map<ll,ll> m;
	cin >> N;

	rep(i,200)
		rep(j,200-i)
			rep(k,200-i-j) {
				ll x = (i+1)*(i+1)+(j+1)*(j+1)+(k+1)*(k+1)+(i+1)*(j+1)+(j+1)*(k+1)+(k+1)*(i+1);
				if(m.count(x))
					++m.at(x);
				else
					m[x] = 1;
			}

	rep(i,N) {
		if(m.count(i+1))
			cout << m.at(i+1);
		else
			cout << 0;
		cout << endl;
	}
}