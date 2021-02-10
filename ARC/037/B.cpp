#include <bits/stdc++.h>
using namespace std;

int N,M;
map<int, vector<int>> B;
bool seen[100];

bool dfs(int x, int p) {
  bool ok=true;

  if(!B.count(x))
    return true;

  seen[x] = true;
  for(int y : B.at(x)) {
    if(y==p)
      continue;
    if(seen[y] || !dfs(y,x))
      ok = false;
  }
  return ok;
}

int main() {
  int i,a,b,c=0;
  cin >> N >> M;
  memset(seen, 0, sizeof(seen));
  for(i=0; i<M; i++) {
    cin >> a >> b;
    if(!B.count(a-1))
      B[a-1] = vector<int>(0);
    if(!B.count(b-1))
      B[b-1] = vector<int>(0);
    B.at(a-1).push_back(b-1);
    B.at(b-1).push_back(a-1);
  }

  for(i=0; i<N; i++) {
    if(dfs(i,N))
      c++;
  }

  cout << c <<endl;
}
