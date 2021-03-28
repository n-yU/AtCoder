#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

bool cs(pair<int,int> x, pair<int,int> y) {
  if(x.second == y.second)
    return x.first > y.first;
  else
    return x.second < y.second;
}

int main() {
  int N,i,w,h;
  cin >> N;
  vector<pair<int,int>> p(N);
  vector<int> dp(N, INF);

  for(i=0; i<N; i++) {
    cin >> w >> h;
    p.at(i) = make_pair(w,h);
  }
  sort(p.begin(), p.end(), cs);

  for(i=0; i<N; i++)
    *lower_bound(dp.begin(), dp.end(), p.at(i).first) = p.at(i).first;

  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
 }
