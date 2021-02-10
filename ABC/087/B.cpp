#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,X,p=0,i,j;
  cin >> A >> B >> C >> X;

  for(i=0; i<=A; i++) {
    if(X-i*500<0)
      break;
    for(j=0; j<=B; j++) {
      int r = X-i*500-j*100;
      if(r<0)
        break;
      if(r%50==0 && r/50<=C)
        p++;
    }
  }

  cout << p << endl;
}
