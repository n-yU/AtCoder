#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<string> field(10);
vector<vector<bool>> seen(10, vector<bool>(10));

void dfs(int x, int y) {
  seen.at(x).at(y) =  true;

  for(int k=0; k<4; k++) {
    int px=x+dx[k], py=y+dy[k];
    if(px>=0 && py>=0 && px<10 && py<10 && field.at(px).at(py)=='o' && !seen.at(px).at(py))
      dfs(px, py);
  }
}

bool isReachable() {
  int x,y;
  for(x=0; x<10; x++) {
    for(y=0; y<10; y++) {
      if(field.at(x).at(y)=='o')
        if(!seen.at(x).at(y))
          break;
      else if(field.at(x).at(y)=='x')
        if(seen.at(x).at(y))
          break;
    }
    if(y!=10)
      break;
  }
  if(x==10 && y==10)
    return true;
  else
    return false;
}

int main() {
  int i,j;
  for(i=0; i<10; i++)
    cin >> field.at(i);

  for(i=0; i<10; i++) {
    for(j=0; j<10; j++) {
      seen.assign(10, vector<bool>(10, false));
      dfs(i,j);
      if(isReachable())
        break;
    }
    if(j!=10)
      break;
  }

  if(i==10 && j==10)
    cout << "NO";
  else
    cout << "YES";
  cout << endl;
}
