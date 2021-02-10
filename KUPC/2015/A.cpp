#include <bits/stdc++.h>
using namespace std;

int main() {
  int T,i,j;
  cin >> T;
  string t="tokyo", k="kyoto";
  for(i=0; i<T; i++) {
    string S;
    cin >> S;
    if(S.size()>4) {
      int c=0;
      for(j=0; j<S.size()-4; j++)
        if(S.substr(j,5)==t || S.substr(j,5)==k) {
          c++;
          j+=4;
        }
      cout << c << endl;
    } else
      cout << 0 << endl;
  }
}
