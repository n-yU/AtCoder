#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  int i,N,M,x;
  ll s=0;
  cin >> N >> M;
  priority_queue<int> A;
  for(i=0; i<N; i++) {
    cin >> x;
    A.push(x);
  }
  for(i=0; i<M; i++) {
    int mn = A.top();
    A.pop();
    A.push(mn/2);
  }
  while(!A.empty()) {
    s += A.top();
    A.pop();
  }
  cout << s << endl;
}
