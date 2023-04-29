#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,K,i,c=0;
  cin >> A >> B >> K;

  for(i=A; i>0; i--) {
    if(A%(i+1)==0 && B%(i+1)==0)
      c++;
    if(c==K)
      break;
  }

  cout << i+1 << endl;
}
