#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,d=0,t;
	string s;
	cin >> N;

	t = N;
	while(t-pow(26,++d) > 0)
		t -= pow(26,d);
	--t;

	while(t > 0) {
		ll r;
		r = t%26;
		t /= 26;
		s.push_back(char(r+'a'));
	}

	while(s.size() < d)
		s.push_back('a');
	reverse(s.begin(), s.end());
	cout << s << endl;
}