#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Y,i,j;
  cin >> N >> Y;

  for(i=N; i>=0; i--)
    for(j=N-i; j>=0; j--)
      if(Y-10000*i-5000*j-1000*(N-i-j) == 0) {
        cout << i << " " << j << " " << N-i-j << endl;
        return 0;
      }
  cout << "-1 -1 -1" << endl;
}
