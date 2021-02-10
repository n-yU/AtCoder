#include <bits/stdc++.h>
using namespace std;

int dh[4] = {0, 1, 0, -1};
int dw[4] = {1, 0, -1, 0};

int main() {
  int H,W,N,i,j,s=0;
  cin >> H >> W >> N;
  vector<string> field(H);
  vector<pair<int,int>> target(N+1);
  for(i=0; i<H; i++)
    cin >> field.at(i);

  for(i=0; i<H; i++)
    for(j=0; j<W; j++) {
      char c = field.at(i).at(j);
      int n = c-'0';
      if(c == 'S') {
        target.at(0).first = i;
        target.at(0).second = j;
      } else if(n>0 && n<=N) {
        target.at(n).first = i;
        target.at(n).second = j;
      }
    }

  for(i=0; i<N; i++) {
    vector<vector<int>> dist(H, vector<int>(W,-1));
    queue<pair<int,int>> q;
    int th=target.at(i).first, tw=target.at(i).second;
    dist.at(th).at(tw) = 0;
    q.push(make_pair(th, tw));

    while(!q.empty()) {
      pair<int,int> p = q.front();
      q.pop();

      for(j=0; j<4; j++) {
        int nh=p.first+dh[j], nw=p.second+dw[j];
        if(nh>=0 && nw>=0 && nh<H && nw<W && field.at(nh).at(nw)!='X' && dist.at(nh).at(nw)==-1) {
          dist.at(nh).at(nw) = dist.at(p.first).at(p.second)+1;
          q.push(make_pair(nh, nw));
        }
      }

      if(dist.at(target.at(i+1).first).at(target.at(i+1).second) != -1)
        break;
    }

    s+=dist.at(target.at(i+1).first).at(target.at(i+1).second);
  }

  cout << s << endl;
}
