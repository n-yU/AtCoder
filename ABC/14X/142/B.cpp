#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,i,h,s=0;
  cin >> N >> K;
  for(i=0; i<N; i++) {
    cin >> h;
    if(h >= K)
      s++;
  }
  cout << s << endl;
}
