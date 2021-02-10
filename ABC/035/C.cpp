#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Q,i,l,r;
  cin >> N >> Q;
  vector<int> f(N,0);

  for(i=0; i<Q; i++) {
    cin >> l >> r;
    f.at(l-1)++;
    if(r<N)
      f.at(r)--;
  }

  for(i=0; i<N; i++) {
    if(f.at(i)%2)
      cout << 1;
    else
      cout << 0;
    if(i<N-1)
      f.at(i+1) += f.at(i);
  }
  cout << endl;
}

// 参考[いもす法]:https://imoz.jp/algorithms/imos_method.html
