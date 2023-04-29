#include <bits/stdc++.h>
using namespace std;

int main() {
  int rx=0, r=0;
  string S;
  cin >> S;
  set<char> x;
  x.insert('A'); x.insert('C'); x.insert('G'); x.insert('T');

  for(char c : S)
    if(x.count(c))
      r++;
    else {
      if(r>rx)
        rx=r;
      r=0;
    }

  if(r>rx)
    rx=r;
  cout << rx << endl;
}
