#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define MAX 1e5

int main() {
	int N,t=0;
	cin >> N;
	vector<int> r(MAX,0);

	rep(i,N) {
		int A;
		cin >> A;
		++r.at(--A);
	}

	rep(i,1e5)
		t += max(0, r.at(i)-1);
	cout << t << endl;
}