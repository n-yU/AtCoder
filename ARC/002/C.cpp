#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;

vector<char> b = {'A', 'B', 'X', 'Y'};

int main() {
	int N,r=INF;
	string c;
	cin >> N >> c;

	rep(i,16)
		rep(j,16) {
			char l1,l2,r1,r2;
			int x=0;
			string s="";
			l1 = b.at(i%4);
			l2 = b.at(i/4%4);
			r1 = b.at(j%4);
			r2 = b.at(j/4%4);

			while(x < N-1) {
				if(c.at(x)==l1 && c.at(x+1)==l2) {
					s += 'L';
					x += 2;
				} else if(c.at(x)==r1 && c.at(x+1)==r2) {
					s += 'R';
					x += 2;
				} else
					s += c.at(x++);
			}

			if(x == N-1)
				s += c.at(x);
			r = min(r, (int)s.size());
		}

	cout << r << endl;
}