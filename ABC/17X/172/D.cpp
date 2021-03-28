#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,r=0;
	cin >> N;
	vector<ll> d(N+1,1);

	for(int i=2; i<=N; ++i)
		for(int j=i; j<=N; j+=i)
			++d.at(j);

	rep(i,N)
		r += d.at(i+1)*(i+1);
	cout << r << endl;
}