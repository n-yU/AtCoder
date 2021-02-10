#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int i=0, c=0;

  while(i<S.size()-1) {
    if(S.at(i)!=S.at(i+1)) {
      c+=2;
      if(i+2<S.size())
        S=S.substr(0,i)+S.substr(i+2);
      else
        S=S.substr(0,i+1);
      if(i!=0 && S.at(i)!=S.at(i-1))
      	i--;
    } else
      i++;
  }

  cout << c << endl;
}
