#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)

int main() {
	ll N,x=0;
	bool ok=1;

	cin >> N;
	vector<ll> A(N+1),m(N+1,0),r(N+1,0),p(N+1);
	rep(i,N+1)
		cin >> A.at(i);

	if(N == 0) {
		if(A.at(0) == 1)
			cout << 1;
		else
			cout << -1;
		cout << endl;
		return 0;
	}
	
	m.at(N) = A.at(N);
	rep(i,N)
		m.at(N-i-1) = m.at(N-i)+A.at(N-i-1);

	r.at(0) = 1;
	p.at(0) = r.at(0)-A.at(0);

	rep(i,N-1) {
		r.at(i+1) = min(m.at(i+1), p.at(i)*2);
		p.at(i+1) = r.at(i+1)-A.at(i+1);

		if(p.at(i+1) < 0) {
			ok = 0;
			break;
		}
	}

	if(p.at(N-1)*2>=A.at(N) && p.at(N-1)<=A.at(N))
		r.at(N) = A.at(N);
	else
		ok = 0;

	rep(i,N+1)
		x += r.at(i);
	cout << ((ok) ? x : -1) << endl;
}