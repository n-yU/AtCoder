#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> lun;

void dfs(ll x) {
	string t = to_string(x);
	if(t.size() > 10)
		return;

	lun.push_back(x);

	for(ll i=t.at(t.size()-1)-'0'-1; i<=t.at(t.size()-1)-'0'+1; ++i)
		if(i>=0 && i<=9)
			dfs(x*10+i);
}

int main() {
	ll K,c=0;
	cin >> K;

	for(ll i=1; i<=9; ++i)
		dfs(i);
	sort(lun.begin(), lun.end());

	cout << lun.at(K-1) << endl;
}