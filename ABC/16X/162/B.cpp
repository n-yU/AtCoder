#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,s=0;
	cin >> N;

	rep(i,N) {
		ll t=i+1;
		if(t%3 && t%5)
			s += t;
	}

	cout << s << endl;
}