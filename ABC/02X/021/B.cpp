#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,a,b,K,i,P;
  set<int> s;
  cin >> N >> a >> b >> K;

  s.insert(a); s.insert(b);
  for(i=0; i<K; i++) {
    cin >> P;
    if(s.count(P))
      break;
    s.insert(P);
  }

  cout << ((i==K)?"YES":"NO") << endl;
}
