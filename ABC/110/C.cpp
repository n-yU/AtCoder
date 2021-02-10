#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  string S,T;
  cin >> S >> T;
  map<char,char> m,n;

  for(i=0; i<S.size(); i++) {
    if(m.count(S.at(i))) {
      if(m[S.at(i)] != T.at(i)) {
        cout << "No" << endl;
        return 0;
      }
    } else
      m[S.at(i)] = T.at(i);
  }
  for(i=0; i<T.size(); i++) {
    if(n.count(T.at(i))) {
      if(n[T.at(i)] != S.at(i)) {
        cout << "No" << endl;
        return 0;
      }
    } else
      n[T.at(i)] = S.at(i);
  }
  cout << "Yes" << endl;
}
