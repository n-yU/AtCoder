#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	ll N,r=0;
	string S;
	map<char,vector<int>> m;
	cin >> N >> S;

	m['R'] = vector<int>(N,0);
	m['G'] = vector<int>(N,0);
	m['B'] = vector<int>(N,0);

	rep(i,N) {
		m.at(S.at(N-1-i)).at(N-1-i) = 1;

		if(i != 0) {
			m['R'].at(N-1-i) += m.at('R').at(N-i);
			m['G'].at(N-1-i) += m.at('G').at(N-i);
			m['B'].at(N-1-i) += m.at('B').at(N-i);
		}
	}

	rep(i,N)
		for(int j=i+1; j<N-1; ++j) {
			if(S.at(i) == S.at(j))
				continue;
			string t=""; t+=S.at(i); t+=S.at(j);
			char p;
			sort(t.begin(), t.end());

			if(t == "BG")
				p = 'R';
			else if(t == "BR")
				p = 'G';
			else
				p = 'B';

			r += m.at(p).at(j+1);
			
			if(j+(j-i)<N && S.at(j+(j-i)) == p)
				--r;
		}

	cout << r << endl;
}