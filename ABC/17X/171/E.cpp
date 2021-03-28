#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,x=0;
	cin >> N;
	vector<ll> a(N);

	rep(i,N) {
		cin >> a.at(i);
		x ^= a.at(i);
	}

	rep(i,N)
		cout << (a.at(i)^x) << " ";
	cout << endl;
}