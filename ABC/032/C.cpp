#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,K,t,l=0,r=0,a=0;
	cin >> N >> K;
	vector<ll> s(N);

	rep(i,N) {
		cin >> s.at(i);
		if(s.at(i) == 0) {
			cout << N << endl;
			return 0;
		}
	}

	if(K == 0) {
		cout << 0 << endl;
		return 0;
	}

	t = s.at(l);
	if(t <= K)
		a = 1;
		
	while(1) {
		while(t <= K) {
			if(r < N-1)
				t *= s.at(++r);
			else
				break;

			if(t <= K)
				a = max(a, r-l+1);
		}

		if(r == N-1)
			break;

		while(t > K)
			t /= s.at(l++);
	}

	cout << a << endl;
}