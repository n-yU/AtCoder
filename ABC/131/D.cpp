#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,A,B;
  int64_t t=0;
  cin >> N;
  vector<pair<int,int>> T(N);

  for(i=0; i<N; i++) {
    cin >> A >> B;
    T.at(i) = make_pair(B,A);
  }

  sort(T.begin(), T.end());

  for(i=0; i<N; i++) {
    t+=T.at(i).second;
    if(t>T.at(i).first)
      break;
  }

  if(i==N)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
