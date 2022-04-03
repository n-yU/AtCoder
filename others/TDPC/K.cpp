#include <bits/stdc++.h>
using namespace std;

const int INF=2e9+7;

int main() {
  int N,i,x,r;
  cin >> N;
  vector<pair<int,int>> C(N);
  vector<int> dp(N, INF);
  for(i=0; i<N; i++) {
    cin >> x >> r;
    C.at(i) = make_pair(x-r,x+r);
  }
  sort(C.begin(), C.end());

  for(i=0; i<N; i++)
    *lower_bound(dp.begin(), dp.end(), -C.at(i).second) = -C.at(i).second;
  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << endl;
}
