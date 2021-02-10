#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,r=0;
	cin >> N;

	rep(i,N) {
		ll x = N/(i+1);
		r += x*(x+1)*(i+1)/2;
	}

	cout << r << endl;
}