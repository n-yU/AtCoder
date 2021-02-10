#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
const ll INF=1e18+7;

vector<vector<vector<ll>>> dp(64, vector<vector<ll>>(64, vector<ll>(64)));

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

ll coin(map<ll,int> m, int d, int n) {
	ll x=0,y=0,z=0;

	if(m.count(2)) {
		x = m.at(2);
		n /= pow(2,m.at(2));
	}
	if(m.count(3)) {
		y = m.at(3);
		n /= pow(3,m.at(3));
	}
	if(m.count(5)) {
		z = m.at(5);
		n /= pow(5,m.at(5));
	}

	return dp.at(x).at(y).at(z)+n*d;
}

int main() {
	int T;
	cin >> T;

	rep(i,T) {
		ll N,A,B,C,D,r=INF;
		map<ll,int> m;
		cin >> N >> A >> B >> C >> D;

		rep(j,64)
			rep(k,64)
				rep(l,64)
					dp.at(j).at(k).at(l) = INF;

		dp.at(0).at(0).at(0) = 0;
		rep(j,64)
			rep(k,64)
				rep(l,64) {
					if(j != 0)
						dp.at(j).at(k).at(l) = min(dp.at(j).at(k).at(l), dp.at(j-1).at(k).at(l)+A);
					if(k != 0)
						dp.at(j).at(k).at(l) = min(dp.at(j).at(k).at(l), dp.at(j).at(k-1).at(l)+B);
					if(l != 0)
						dp.at(j).at(k).at(l) = min(dp.at(j).at(k).at(l), dp.at(j).at(k).at(l-1)+C);
				}

		// ll x=1;
		// rep(j,64) {
		// 	ll y=1;
		// 	x *= 2;
		// 	if(x > INF)
		// 		continue;
		// 	rep(k,64) {
		// 		ll z=1;
		// 		y *= 3;
		// 		if(x*y > INF)
		// 			continue;
		// 		rep(l,64) {
		// 			z *= 5;
		// 			if(x*y*z > INF)
		// 				continue;
		// 			r = min(r, dp.at(j).at(k).at(l)+D*abs(D-x*y*z)+D);
		// 		}
		// 	}
		// }

		// cout << N+(2-N%2) << endl;
		// cout << coin(primeFact(N+(2-N%2))) << endl;
		// cout << D*(2-N%2) << endl;

		// r = min(r,coin(primeFact(N+(2-N%2)))+D*(2-N%2));
		// r = min(r,coin(primeFact(N-N%2))+D*N%2);
		// r = min(r,coin(primeFact(N+(3-N%3)))+D*(3-N%3));
		// r = min(r,coin(primeFact(N-N%3))+D*N%3);
		// r = min(r,coin(primeFact(N+(5-N%5)))+D*(5-N%5));
		// r = min(r,coin(primeFact(N-N%5))+D*N%5);

		rep(j,3) {
			ll t1 = N;
			if(j == 1)
				t1 += 2-t1%2;
			else if(j == 2)
				t1 -= t1%2;
			rep(k,3) {
				ll t2 = t1;
				if(k == 1)
					t2 += 3-t2%3;
				else if(k == 2)
					t2 -= t2%3;
				rep(l,3) {
					ll t3 = t2;
					if(l == 1)
						t3 += 5-t3%5;
					else if(l == 2)
						t3 -= t3%5;

					// cout << t3 << endl;
					// cout << coin(primeFact(t3),D,t3)+abs(t3-N)*D << endl;
					r = min(r, coin(primeFact(t3),D,t3)+abs(t3-N)*D);
				}
			}
		}

		cout << r << endl;
	}
}