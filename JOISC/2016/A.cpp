#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+7;

int main() {
  int N,Q,i,R,H,a,b;
  cin >> N >> Q;
  vector<pair<int,int>> M(N);
  vector<int> dp(N, INF), x(N, INF);
  for(i=0; i<N; i++) {
    cin >> R >> H;
    M.at(i) = make_pair(R,H);
  }
  sort(M.begin(), M.end());

  for(i=0; i<N; i++) {
    *lower_bound(dp.begin(), dp.end(), M.at(i).second) = M.at(i).second;
    *lower_bound(x.begin(), x.end(), M.at(i).first) = M.at(i).first;
  }

  for(i=0; i<N; i++)
    cout << (x.at(i)==INF?(-1):x.at(i)) << " " << (dp.at(i)==INF?(-1):dp.at(i)) << endl;

  for(i=0; i<Q; i++) {
    int y,z;
    cin >> a >> b;
    y = lower_bound(dp.begin(), dp.end(), b)-dp.begin();
    z = lower_bound(x.begin(), x.end(), a)-x.begin();
    if(y < z) {
      y = lower_bound(M.begin(), M.end(), make_pair(a, b))-M.begin();
      z = lower_bound(dp.begin(), dp.end(), b)-dp.begin();
    } else {
      y = lower_bound(M.begin(), M.end(), make_pair(a, b))-M.begin();
      z = lower_bound(x.begin(), x.end(), a)-x.begin();
    }
    cout << y << " " << z << endl;
    cout << y-z << endl;
  }
}
