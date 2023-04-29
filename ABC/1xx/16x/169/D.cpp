#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

map<ll,int> primeFact(ll n) {
	map<ll,int> r;
	for(ll i=2; i*i<=n; i++)
		while(n%i == 0) {
		r[i]++;
		n /= i;
		}
	if(n != 1)
		r[n] = 1;
	return r;
}

int main() {
	ll N,r=0;
	cin >> N;
	map<ll,int> m = primeFact(N);

	for(auto p : m) {
		int x = (int)sqrt(p.second*2);
		if(x*(x+1) > p.second*2)
			--x;
		r += x;
	}

	cout << r << endl;
}