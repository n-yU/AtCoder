#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
	int N,M,a,b,c=1,r;
	cin >> N >> M;
	r = N;
	vector<P> p(M);

	rep(i,M)
		cin >> p.at(i).first >> p.at(i).second;
	sort(p.begin(), p.end());

	rep(i,M) {
		if(p.at(i).first >= r) {
			c++;
			r = p.at(i).second;
		} else
			r = min(r,p.at(i).second);
	}

	cout << c << endl;
}