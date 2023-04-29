#include <bits/stdc++.h>
using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
vector<string> field;

int main() {
  int R,C,sy,sx,gy,gx,i;
  cin >> R >> C >> sy >> sx >> gy >> gx;
  field.resize(R);
  for(i=0; i<R; i++)
    cin >> field.at(i);

  vector<vector<int>> d(R, vector<int>(C,-1));
  queue<pair<int,int>> q;

  d.at(sy-1).at(sx-1) = 0;
  q.push(make_pair(sy-1,sx-1));

  while(!q.empty()) {
    pair<int,int> p = q.front();
    q.pop();

    for(i=0; i<4; i++) {
      int ny=p.first+dy[i], nx=p.second+dx[i];
      if(ny>=0 && nx>=0 && ny<R && nx<C &&
         field.at(ny).at(nx)=='.' && d.at(ny).at(nx)==-1) {
      	int k = d.at(ny).at(nx);
      	d.at(ny).at(nx) = d.at(p.first).at(p.second)+1;
      	q.push(make_pair(ny, nx));
      }
    }
  }

  cout << d.at(gy-1).at(gx-1) << endl;
}
