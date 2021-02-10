#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
    ll X,Y,A,B,C,s=0;
	cin >> X >> Y >> A >> B >> C;
	vector<ll> p(A),q(B),r(C),ap(X+Y+C);

	rep(i,A)
		cin >> p.at(i);
	rep(i,B)
		cin >> q.at(i);
	sort(p.begin(), p.end(), greater<ll>());
	sort(q.begin(), q.end(), greater<ll>());

	rep(i,X)
		ap.at(i) = p.at(i);
	rep(i,Y)
		ap.at(i+X) = q.at(i);
	rep(i,C)
		cin >> ap.at(i+X+Y);
	sort(ap.begin(), ap.end(), greater<ll>());

	rep(i,X+Y)
		s += ap.at(i);
	cout << s << endl;
}