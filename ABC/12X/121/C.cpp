#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int N,M,i,A,B;
  ll c=0;
  cin >> N >> M;
  vector<pair<ll,int>> D(N);

  for(i=0; i<N; i++) {
    cin >> A >> B;
    D.at(i).first = A;
    D.at(i).second = B;
  }
  sort(D.begin(), D.end());

  for(i=0; i<N; i++) {
    if(M>=D.at(i).second) {
      c+= D.at(i).first * D.at(i).second;
      M-=D.at(i).second;
    }
    else {
      c+= D.at(i).first * M;
      break;
    }
  }

  cout << c << endl;
}
