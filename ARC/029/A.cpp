#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,r=0,j;
  cin >> N;
  vector<int> t(N);

  for(i=0; i<N; i++) {
    cin >> t.at(i);
    r+=t.at(i);
  }

  for(i=0; i<pow(2,N); i++) {
  	bitset<4> p(i);
    string s=p.to_string();
    int a=0, b=0;
    for(j=4; j>4-N; j--) {
      if(s.at(j-1)=='0')
        a+=t.at(4-j);
      else
        b+=t.at(4-j);
    }
    if(r>max(a,b))
      r=max(a,b);
  }

  cout << r << endl;
}
