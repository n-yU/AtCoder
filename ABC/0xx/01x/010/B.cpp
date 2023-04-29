#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n,s=0,a;
	cin >> n;

	rep(i,n) {
		cin >> a;
		while(1) {
			if(a%2!=0 && a%3!=2)
				break;
			++s, --a;
		}
	}

	cout << s << endl;
}