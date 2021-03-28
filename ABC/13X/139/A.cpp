#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,c=0;
  string S,T;
  cin >> S >> T;
  for(i=0; i<3; i++)
    if(S.at(i) == T.at(i))
      c++;
  cout << c << endl;
}
