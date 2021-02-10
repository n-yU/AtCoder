#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,s=0,p=0;
	cin >> N;
	vector<int> A(N+1),s1(N+1),s2(N+1);

	rep(i,N) {
		cin >> A.at(i);
		s1.at(i+1) = s1.at(i)+abs(p-A.at(i));
		p = A.at(i);
	}
	A.at(N) = 0;

	p = 0;
	rep(i,N)
		s2.at(N-i-1) = s2.at(N-i)+abs(A.at(N-i)-A.at(N-i-1));

	p = 0;
	rep(i,N) {
		cout << s1.at(i)+s2.at(i+1)+abs(p-A.at(i+1)) << endl;
		p = A.at(i);
	}
}