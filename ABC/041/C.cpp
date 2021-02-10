#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; ++i)
typedef pair<int,int> P;

int main() {
	int N;
	cin >> N;
	vector<P> a(N);

	rep(i,N) {
		a.at(i).second = i+1;
		cin >> a.at(i).first;
	}
	sort(a.begin(), a.end(), greater<P>());

	rep(i,N)
		cout << a.at(i).second << endl;
}