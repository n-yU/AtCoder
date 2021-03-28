#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int INF=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int N;
	cin >> N;
	map<string,int> m;
	m["AC"]=0, m["WA"]=0, m["TLE"]=0, m["RE"]=0;

	rep(i,N) {
		string s;
		cin >> s;
		++m.at(s);
	}

	cout << "AC x " << m.at("AC") << endl;
	cout << "WA x " << m.at("WA") << endl;
	cout << "TLE x " << m.at("TLE") << endl;
	cout << "RE x " << m.at("RE") << endl;
}