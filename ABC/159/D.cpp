#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,s=0;
	cin >> N;
	vector<ll> A(N);
	map<ll,ll> m;

	rep(i,N) {
		cin >> A.at(i);
		if(m.count(A.at(i)))
			++m.at(A.at(i));
		else
			m[A.at(i)] = 1;
	}

	for(auto p : m)
		s += p.second*(p.second-1)/2;

	rep(i,N) {
		ll t = s;
		t -= m.at(A.at(i))*(m.at(A.at(i))-1)/2;
		t += (m.at(A.at(i))-1)*(m.at(A.at(i))-2)/2;
		cout << t << endl;
	}
}