#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll N;
	set<ll> s;
	cin >> N;

	for(ll i=1; i*i<=N-1; ++i)
		if((N-1)%i == 0) {
			s.insert(i);
			s.insert((N-1)/i);
		}

	for(ll i=1; i*i<=N; ++i) {
		if(N%i != 0)
			continue;

		ll t=N;
		if(i != 1) {
			while(t%i == 0)
				t /= i;
			if(t%i == 1)
				s.insert(i);
		}

		t=N;
		while(t%(N/i) == 0)
			t /= (N/i);
		if(t%(N/i) == 1)
			s.insert(N/i);
	}

	cout << s.size()-1 << endl;
}