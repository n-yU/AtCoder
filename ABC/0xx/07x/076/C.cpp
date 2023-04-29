#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,j;
  string S,T;
  cin >> S >> T;

  if(T.size() > S.size()) {
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  for(i=S.size()-T.size(); i>=0; i--) {
    for(j=i; j<T.size()+i; j++)
      if(S.at(j)!='?' && S.at(j)!=T.at(j-i))
        break;
    if(j==T.size()+i)
      break;
  }

  if(i==-1)
    cout << "UNRESTORABLE";
  else {
    for(j=0; j<S.size(); j++)
      if(S.at(j) == '?')
        if(j>=i && j<i+T.size())
          S.at(j) = T.at(j-i);
        else
          S.at(j) = 'a';
    cout << S;
  }
  cout << endl;
}
