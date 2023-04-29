#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll X;
	cin >> X;

	for(ll i=-1000; i<=1000; ++i)
		for(ll j=-1000; j<=1000; ++j)
			if(pow(i,5)-pow(j,5) == X) {
				cout << i << " " << j << endl;
				return 0;
			}
}