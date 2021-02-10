#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	int N,x,d1=-1,d2=-1;
	ll K;
	set<int> s;
	s.insert(0);

	cin >> N >> K;
	vector<int> A(N),t(N,0);
	rep(i,N)
		cin >> A.at(i);

	rep(i,N-1) {
		t.at(i+1) = A.at(t.at(i))-1;
		if(s.count(t.at(i+1))) {
			x = t.at(i+1);
			break;
		}
		s.insert(t.at(i+1));
	}

	rep(i,N)
		if(t.at(i)==x)
			if(d1 == -1) {
				d1 = i;
			} else {
				d2 = i;
				break;
			}

	if(K <= d1)
		cout << t.at(K)+1 << endl;
	else
		cout << t.at(((K-d1)%(d2-d1))+d1)+1 << endl;
}