#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

int main() {
	int N;
	cin >> N;
	vector<P> A(1<<N);
	vector<int> r(1<<N,N);
	
	rep(i,1<<N) {
		cin >> 	A.at(i).first;
		A.at(i).second = i;
	}

	rep(i,N)
		rep(j,1<<(N-i-1)) {
			int x=j*(1<<(i+1)), y=j*(1<<(i+1))+(1<<i);
			if(A.at(x).first < A.at(y).first) {
				r.at(A.at(x).second) = i+1;
				A.at(x) = A.at(y);
			} else {
				r.at(A.at(y).second) = i+1;
			}
		}
	
	rep(i,1<<N)
		cout << r.at(i) << endl;
}