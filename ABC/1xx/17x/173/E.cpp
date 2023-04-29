#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
const int MOD=1e9+7;
typedef long long ll;
typedef pair<int,int> P;

int main() {
	int N,K;
	ll r=1;
	cin >> N >> K;
	vector<ll> A,B;

	rep(i,N) {
		ll t;
		cin >> t;

		if(t > 0)
			A.push_back(t);
		else if(t < 0)
			B.push_back(t);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<ll>());

	if(A.size()+B.size() < K) {
		cout << 0 << endl;
		return 0;
	}

	if((K-A.size())%2) {
		rep(i,A.size())
			r *= A.at(i);
		rep(i,K-A.size())
			r *= B.at(i);
		cout << r << endl;
		return 0;
	}

	sort(B.begin(), B.end());
	for(int i=0; i<B.size()-2; i+=2) {
		if(B.size() < 2)
			break;
		auto itr1 = upper_bound(A.begin(), A.end(), -B.at(i));
		auto itr2 = upper_bound(A.begin(), A.end(), -B.at(i+1));
		int r1=itr1-A.begin(), r2=itr2-A.begin();

		if((r1==0 || r2==0) && A.size()>=K) {
			break;
		} else {
			A.push_back(-B.at(i));
			A.push_back(-B.at(i+1));
		}
	}

	if(A.size()<K && B.size()>0)
		A.push_back(B.at(B.size()-1));

	sort(A.begin(), A.end(), greater<ll>());
	rep(i,K) {
		r *= A.at(i);
		r %= MOD;
	}
	cout << r << endl;
}