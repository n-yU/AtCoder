#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

struct UnionFind {
	vector<int> p;
	UnionFind(int n) : p(n,-1) {}

	int root(int x) {
		if (p.at(x) < 0)
			return x;
		return p.at(x) = root(p.at(x));
	}

	bool issame(int x, int y) {
		return root(x) == root(y);
	}

	bool merge(int x, int y) {
		x=root(x), y=root(y);

		if (x == y)
			return 0;
		if(p.at(x) > p.at(y))
			swap(x,y);

		p.at(x) += p.at(y);
		p.at(y) = x;
		return 1;
	}

	int size(int x) {
		return -p.at(root(x));
	}
};


int main() {
	int N,M,K,A,B;
	cin >> N >> M >> K;

	UnionFind uf(N);
	vector<set<int>> fb(N);

	rep(i,M) {
		cin >> A >> B;
		uf.merge(--A,--B);
		fb.at(A).insert(B);
		fb.at(B).insert(A);
	}

	rep(i,K) {
		cin >> A >> B;
		if(uf.issame(--A,--B)) {
			fb.at(A).insert(B);
			fb.at(B).insert(A);
		}
	}

	rep(i,N)
		cout << uf.size(i)-fb.at(i).size()-1 << " ";
	cout << endl;
}