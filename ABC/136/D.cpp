#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int l=S.size(), i, x=1, y, z;
  vector<int> r(l,0);

  for(i=0; i<l-1; i++) {
    if(S.at(i)=='R' && S.at(i+1)=='L') {
      y=i;
      z=x;
      x++;
    } else if(S.at(i)=='L' && S.at(i+1)=='R') {
      if(x%2==0) {
        r.at(y) = x/2;
        r.at(y+1) = x/2;
      } else {
        if(z%2==0) {
          r.at(y) = x/2;
          r.at(y+1) = x/2+1;
        } else {
          r.at(y) = x/2+1;
          r.at(y+1) = x/2;
        }
      }
      x=1;
      y=0;
    } else
      x++;
  }

  if(x%2!=0)
  	if(z%2==0) {
    	r.at(y) = x/2;
    	r.at(y+1) = x/2+1;
  	} else {
    	r.at(y) = x/2+1;
    	r.at(y+1) = x/2;
  	}
  else {
    r.at(y) = x/2;
    r.at(y+1) = x/2;
  }

  for(i=0; i<l; i++)
    cout << r.at(i) << " ";
  cout << endl;
}
