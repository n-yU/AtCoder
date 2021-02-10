#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll A,l,r,k=-1;
	cin >> A;

	l=10, r=10001;
	while(r-l > 1) {
		ll m=(l+r)/2, t=0;
		string n = to_string(m);

		rep(i,n.size())
			t += (n.at(i)-'0')*pow(m,n.size()-1-i);
		
		if(t == A) {
			k = m;
			break;
		} else if(t > A) {
			r = m;
		} else {
			l = m;
		}
	}

	cout << k << endl;
}