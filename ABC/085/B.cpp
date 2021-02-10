#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,x;
  cin >> N;
  set<int> m;

  for(i=0; i<N; i++) {
    cin >> x;
    m.insert(x);
  }

  cout << m.size() << endl;
}
