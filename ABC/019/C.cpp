#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A;
	cin >> N;
	set<int> s;

	rep(i,N) {
		cin >> A;
		while(A%2 == 0)
			A /= 2;
		s.insert(A);
	}

	cout << s.size() << endl;
}