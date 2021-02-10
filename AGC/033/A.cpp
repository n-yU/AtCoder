#include <bits/stdc++.h>
using namespace std;

int dh[4] = {0, 1, 0, -1};
int dw[4] = {1, 0, -1, 0};
vector<string> field;

int main() {
  int H,W,i,j;
  pair<int,int> p;
  cin >> H >> W;
  field.resize(H);
  for(i=0; i<H; i++)
    cin >> field.at(i);

  vector<vector<int>> d(H, vector<int>(W,-1));
  queue<pair<int,int>> q;

  for(i=0; i<H; i++)
    for(j=0; j<W; j++)
      if(field.at(i).at(j) == '#') {
        q.push(make_pair(i,j));
        d.at(i).at(j) = 0;
      }


  while(!q.empty()) {
    p = q.front();
    q.pop();

    for(i=0; i<4; i++) {
      int nh=p.first+dh[i], nw=p.second+dw[i];
      if(nh>=0 && nw>=0 && nh<H && nw<W &&
         field.at(nh).at(nw)=='.' && d.at(nh).at(nw)==-1) {
        if(d.at(nh).at(nw)==-1)
          d.at(nh).at(nw) = d.at(p.first).at(p.second)+1;
        else
          d.at(nh).at(nw) = min(d.at(nh).at(nw), d.at(p.first).at(p.second)+1);
      	q.push(make_pair(nh, nw));
      }
    }
  }

  cout << d.at(p.first).at(p.second) << endl;
}
