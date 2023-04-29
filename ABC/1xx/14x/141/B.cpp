#include <bits/stdc++.h>
using namespace std;

int main() {
  int i;
  string S;
  cin >> S;
  for(i=0; i<S.size(); i++) {
    if(S[i]=='U' || S[i]=='D')
      continue;
    if(i%2==0 && S[i]=='L')
      break;
    if(i%2!=0 && S[i]=='R')
      break;
  }

  cout << ((i==S.size())?"Yes":"No") << endl;
}
