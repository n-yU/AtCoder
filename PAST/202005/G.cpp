#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef pair<int,int> P;

#define SIZE 250
vector<int> dx = {1,0,-1,1,-1,0}, dy = {1,1,1,0,0,-1};

int main() {
	int N,X,Y,r=-1;
	cin >> N >> X >> Y;
	set<P> obs;
	queue<P> q;
	vector<vector<int>> f(SIZE*2, vector<int>(SIZE*2,-1));

	rep(i,N) {
		int x,y;
		cin >> x >> y;
		obs.insert(P(x,y));
	}

	q.push(P(0,0));
	f.at(SIZE).at(SIZE) = 0;
	while(!q.empty()) {
		P p = q.front();
		q.pop();

		rep(i,6) {
			int nx=p.first+dx.at(i), ny=p.second+dy.at(i);
			if(obs.count(P(nx,ny)) || nx+SIZE<0 || ny+SIZE<0 || nx+SIZE>=SIZE*2 || ny+SIZE>=SIZE*2 || f.at(nx+SIZE).at(ny+SIZE)!=-1)
				continue;
			f.at(nx+SIZE).at(ny+SIZE) = f.at(p.first+SIZE).at(p.second+SIZE)+1;

			if(X==nx && Y==ny) {
				r = f.at(nx+SIZE).at(ny+SIZE);
				break;
			}
			q.push(P(nx,ny));
		}
	}

	cout << r << endl;
}