#include <bits/stdc++.h>
using namespace std;

const int INF=1e9+7;

int main() {
  int N,i;
  cin >> N;
  vector<int> c(N), x(N+2, INF);
  for(i=0; i<N; i++)
    cin >> c.at(i);
  x.at(0) = -INF;

  for(i=0; i<N; i++) {
    auto it = upper_bound(x.begin(), x.end(), c.at(i));
    x.at(it-x.begin()) = c.at(i);
  }

  for(i=0; i<N+2; i++)
    if(x.at(i) == INF)
      break;
  cout << N-i+1 << endl;
}
