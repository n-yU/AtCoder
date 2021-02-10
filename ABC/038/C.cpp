#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,p=0,a,c=0,s=0;
	cin >> N;

	rep(i,N) {
		cin >> a;
		if(a > p)
			++c;
		else {
			s += c*(c+1)/2;
			c = 1;
		}
		p = a;
	}

	cout << s + c*(c+1)/2 << endl;
}