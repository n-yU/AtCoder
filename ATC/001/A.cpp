#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int H,W,i,j;
vector<string> field;
vector<vector<bool>> seen(500,vector<bool>(500,false));

void dfs(int x, int y) {
  seen.at(x).at(y) = true;

  for(int k=0; k<4; k++) {
    int px=x+dx[k], py=y+dy[k];
    if(px>=0 && py>=0 && px<H && py<W && field.at(px).at(py)!='#' && !seen.at(px).at(py))
      dfs(px,py);
  }
}

int main() {
  cin >> H >> W;
  field.resize(H);

  for(i=0; i<H; i++)
    cin >> field.at(i);

  int sx,sy,gx,gy;
  for(i=0; i<H; i++)
    for(j=0; j<W; j++) {
      if(field.at(i).at(j) == 's') {
        sx = i; sy = j;
      }
      if(field.at(i).at(j) == 'g') {
        gx = i; gy = j;
      }
    }

  dfs(sx, sy);

  if(seen.at(gx).at(gy))
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
