#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,i,hp=0;
  string S;
  cin >> N >> K >> S;

  for(i=0; i<N; i++)
    if(S[i]=='R') {
      if(i!=N-1 && S[i+1]=='R')
        hp++;
    } else if(i!=0 && S[i-1]=='L')
        hp++;
  cout << min(N-1, hp+2*K) << endl;
}
