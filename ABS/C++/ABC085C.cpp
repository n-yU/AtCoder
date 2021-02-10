#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Y,i,j;
  cin >> N >> Y;

  for(i=Y/10000; i>=0; i--) {
    if(i<=N)
      for(j=(Y-i*10000)/5000; j>=0; j--)
        if(j<=N-i)
          if((Y-i*10000-j*5000)/1000 == N-i-j) {
            cout << i << " " << j << " " << N-i-j << endl;
            return 0;
          }
  }

  cout << "-1 -1 -1" << endl;
}
