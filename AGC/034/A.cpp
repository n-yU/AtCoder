#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,A,B,C,D,i,cn=0;
  char p='.';
  string S,s1,s2;
  cin >> N >> A >> B >> C >> D >> S;
  s1 = S.substr(A, C-A+1);
  s2 = S.substr(B, D-B+1);

  for(char c : s1) {
    if(c=='#' && p==c) {
      cout << "No" << endl;
      return 0;
    }
    p=c;
  }
  p='.';
  for(char c : s2) {
    if(c=='#' && p==c) {
      cout << "No" << endl;
      return 0;
    }
    p=c;
  }

  if(C>D) {
    for(i=B-2; i<D+1; i++) {
      char c=S.at(i);
      if(c=='.')
        cn++;
      else
        cn=0;
      if(cn==3)
        break;
    }
    if(i==D+1) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
