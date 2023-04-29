#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int T,c=0,i,x=0,y=0,r=0,res;
  cin >> S >> T;

  map<char, pair<int,int>> d;
  d['L'] = make_pair(-1, 0);
  d['R'] = make_pair(1, 0);
  d['U'] = make_pair(0, 1);
  d['D'] = make_pair(0, -1);

  for(i=0; i<S.size(); i++) {
    char c = S.at(i);
    if(c!='?') {
      x += d.at(c).first;
      y += d.at(c).second;
    } else
      r++;
  }

  if(T==1)
    res = abs(x)+abs(y)+r;
  else {
    if(abs(x)+abs(y)-r<0)
      res = (r-abs(x)+abs(y))%2;
    else
      res = abs(x)+abs(y)-r;
  }
  cout << res << endl;
}
