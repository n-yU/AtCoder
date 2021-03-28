#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,r=0,c=0;
	cin >> N;
	vector<ll> A(N),t;
	rep(i,N)
		cin >> A.at(i);
	sort(A.begin(), A.end(), greater<ll>());

	t.push_back(A.at(0));
	rep(i,N-1) {
		r += t.at(c++);
		t.push_back(A.at(i+1));
		t.push_back(A.at(i+1));
	}
	cout << r << endl;
}