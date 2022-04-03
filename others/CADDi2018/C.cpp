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
	ll N,P,r=1;
	map<ll,int> m;

	cin >> N >> P;
	m = primeFact(P);

	for(auto x : m)
		r *= pow(x.first, x.second/N);
	cout << r << endl;
}