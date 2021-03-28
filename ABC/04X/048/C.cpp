#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,x,t,d,s=0;
	cin >> N >> x;
	vector<ll> a(N);
	rep(i,N)
		cin >> a.at(i);
	
	t = a.at(0);
	rep(i,N-1) {
		t += a.at(i+1);

		if(t > x) {
			d = t-x;
			s += d;
			t -= min(a.at(i+1), d);
			a.at(i+1) -= d;
			a.at(i+1) = max(a.at(i+1), 0ll);
		}
		
		t -= a.at(i);
	}

	cout << s << endl;
}