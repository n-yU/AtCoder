#include <bits/stdc++.h>
using namespace std;

bool ok=0;
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
bool m[16][16][16][16][4];
int h,w;
vector<string> c;

void dfs(int y, int x, int a, int b, int d) {
  if(m[y][x][a][b][d])
    return;
  m[y][x][a][b][d] = 1;
  if(y+2==h && x+2==w && a+b==0) {
    ok = 1;
    return;
  }

  for(int i=0; i<4; i++) {
    int ny=y+dy[i], nx=x+dx[i];
    if((i+2)%4!=d && c[ny][nx]=='.') {
      if(((i+1)%4==d && a==0) || ((i+3)%4==d && b==0))
        continue;
      dfs(ny, nx, ((i+1)%4==d)?(a-1):a, ((i+3)%4==d)?(b-1):b, i);
    }
  }
}

int main() {
  int a,b,i,j;
  cin >> a >> b >> h >> w;
  c.resize(h);
  for(i=0; i<h; i++)
    cin >> c.at(i);

  dfs(1, 1, a, b, 1);
  cout << ((ok)?"Yes":"No") << endl;
}
