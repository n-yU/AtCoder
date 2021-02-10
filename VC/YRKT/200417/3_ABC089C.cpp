#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
	int N;
	ll r=0;
	string S;
	vector<ll> p;
	map<char,ll> m;
	cin >> N;

	m['M']=0, m['A']=0, m['R']=0, m['C']=0, m['H']=0;
	rep(i,N) {
		char t;
		cin >> S;
		t = S.at(0);
		if(m.count(t))
			++m.at(t);
	}

	for(auto x : m)
		p.push_back(x.second);
	
	rep(i,p.size()-2)
		for(int j=i+1; j<p.size()-1; ++j)
			for(int k=j+1; k<p.size(); ++k)
				r += p.at(i)*p.at(j)*p.at(k);

	cout << r << endl;
}