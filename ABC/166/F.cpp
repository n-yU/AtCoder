#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A,B,C;
	string s;
	cin >> N >> A >> B >> C;
	vector<map<char,int>> m(N);
	vector<map<string,int>> sv(N);

	rep(i,N) {
		m.at(i)['A']=0, m.at(i)['B']=0, m.at(i)['C']=0;
		sv.at(i).at["AB"]=0, sv.at(i).at["BC"]=0, sv.at(i).at["AC"]=0;
	}

	rep(i,N) {
		cin >> s;
		++m.at(i).at(s.at(0)), ++m.at(i).at(s.at(0)), ++sv.at(i).at(s);

		if(i > 0) {
			m.at(i).at('A') += m.at(i-1).at('A');
			m.at(i).at('B') += m.at(i-1).at('B');
			m.at(i).at('C') += m.at(i-1).at('C');
			sv.at(i).at("AB") += sv.at(i-1).at("AB");
			sv.at(i).at("BC") += sv.at(i-1).at("BC");
			sv.at(i).at("AC") += sv.at(i-1).at("AC");
		}
	}

	rep(i,N) {
		// ?
	}
}