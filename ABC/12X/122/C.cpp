#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Q,i,c=0,l,r;
  string S;
  cin >> N >> Q >> S;
  set<int> AC;
  vector<int> cn(N);

  for(i=0; i<N-1; i++)
    if(S.at(i)=='A' && S.at(i+1)=='C')
      AC.insert(i);
    else if(S.at(i+1)!='A')
      i++;

  for(i=0; i<N-1; i++) {
    cn.at(i) = c;
    if(AC.count(i))
      c++;
  }
  cn.at(N-1) = c;

  for(i=0; i<Q; i++) {
    cin >> l >> r;
    if(l>0)
      cout << cn.at(r-1)-cn.at(l-1) << endl;
    else
      cout << cn.at(r-1) << endl;
  }
}
