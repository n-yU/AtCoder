#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  string S;
  char p;
  int i,c=1,t=0,a,b;
  bool x=1;
  ll K,r;
  cin >> S >> K;

  p = S[0];
  for(i=1; i<S.size(); i++) {
    if(S[i] == p)
      c++;
    else {
      if(x) {
        a = c;
        x = 0;
      }
      t += c/2;
      c = 1;
    }
    p = S[i];
  }
  b = c;
  t += c/2;

  if(c == S.size())
    r = S.size()*K/2;
  else {
    r = t*K;
    if(S[0] == S[S.size()-1])
      r -= (a/2+b/2-(a+b)/2)*(K-1);
  }

  cout << r << endl;
}