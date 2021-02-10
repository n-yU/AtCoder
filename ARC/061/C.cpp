#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  string S;
  cin >> S;
  int i,j,p=0,q=1;
  ll r=0;

  for(i=0; i<pow(2,S.size()-1); i++) {
    bitset<9> b(i);
    string t = b.to_string();
    for(j=8; j>=10-S.size(); j--) {
      if(j<0)
        break;
      if(t.at(j)=='1') {
        r+=stoll(S.substr(p,q));
        p+=q; q=1;
      } else
        q++;
    }
    r+=stoll(S.substr(p));
    p=0, q=1;
  }

  cout << r << endl;
}
