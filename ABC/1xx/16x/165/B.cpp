#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll X,c=0;
	double r=100;
	cin >> X;

	while(r < X) {
		ll x = r*0.01;
		r += x;
		++c;
	}

	cout << c << endl;
}