#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,r=0,i;
  cin >> N >> M;

  for(i=0; i<=N; i++)
    if(i*2+(N-i)*4 == M)
      break;
  if(i==N+1) {
    r++;
    for(i=0; i<N; i++)
      if(i*2+(N-i-1)*4 == M-3)
        break;
    if(i==N) {
      cout << "-1 -1 -1" << endl;
      return 0;
    }
  }
  cout << i << " " << r << " " << (M-r*3-2*i)/4 << endl;
}
