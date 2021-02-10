#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int N,A,B,r=0;
	cin >> N;
	vector<vector<int>> t(N);
	priority_queue<int> pq;

	rep(i,N) {
		cin >> A >> B;
		t.at(A-1).push_back(B);
	}

	rep(i,N) {
		rep(j,t.at(i).size())
			pq.push(t.at(i).at(j));

		r += pq.top();
		pq.pop();
		cout << r << endl;
	}
}