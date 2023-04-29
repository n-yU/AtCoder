#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  int N,i;
  ll c=0;
  cin >> N;
  vector<int> A(N+1), B(N);
  for(i=0; i<N+1; i++)
    cin >> A.at(i);
  for(i=0; i<N; i++)
    cin >> B.at(i);

  for(i=0; i<N; i++) {
    if(B.at(i) < A.at(i))
      c += B.at(i);
    else {
      c += A.at(i);
      B.at(i) -= A.at(i);
      if(B.at(i) < A.at(i+1)) {
        c += B.at(i);
        A.at(i+1) -= B.at(i);
      } else {
        c += A.at(i+1);
        A.at(i+1) = 0;
      }
    }
  }

  cout << c << endl;
}
