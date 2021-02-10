#include <bits/stdc++.h>
using namespace std;

int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int main() {
  int H,W,i,j,sh,sw,gh,gw;
  cin >> H >> W;
  vector<string> field(H);
  for(i=0; i<H; i++)
    cin >> field.at(i);

  for(i=0; i<H; i++)
    for(j=0; j<W; j++) {
      char c = field.at(i).at(j);
      if(c=='s') {
        sh=i; sw=j;
      }
      if(c=='g') {
        gh=i; gw=j;
      }
    }

  vector<vector<int>> dist(H, vector<int>(W,1e7));
  deque<pair<int,int>> dq;

  dist.at(sh).at(sw) = 0;
  dq.push_back({sh,sw});

  while(!dq.empty()) {
    pair<int,int> p = dq.front();
    dq.pop_front();

    for(i=0; i<4; i++) {
      int nh=p.first+dh[i], nw=p.second+dw[i], x;
      if(nh<0 || nw<0 || nh>=H || nw>=W)
        continue;

      x = dist.at(p.first).at(p.second);
      if(field.at(p.first).at(p.second) == '#')
        x++;

      if(dist.at(nh).at(nw) > x) {
        dist.at(nh).at(nw) = x;
        if(field.at(p.first).at(p.second) == '#')
          dq.push_back({nh,nw});
        else
          dq.push_front({nh,nw});
      }
    }

    if(dist.at(gh).at(gw)<3)
      break;
  }

  if(dist.at(gh).at(gw)<3)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
}
