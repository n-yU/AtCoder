#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,N,K,Q,x;
  cin >> N >> K >> Q;
  vector<int> A(N,K);
  for(i=0; i<Q; i++) {
    cin >> x;
    A.at(x-1)++;
  }
  for(i=0; i<N; i++) {
    if(A.at(i)-Q > 0)
      cout << "Yes";
    else
      cout << "No";
    cout << endl;
  }
}
