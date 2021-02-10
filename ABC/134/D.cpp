#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,j;
  cin >> N;
  vector<int> a(N+1);
  set<int> r;
  for(i=1; i<=N; i++)
    cin >> a.at(i);

  for(i=N; i>=1; i--) {
    if(i>N/2) {
      if(a.at(i))
        r.insert(i);
    } else {
      int x=0, j=i*2;
      while(j<=N) {
        if(r.count(j))
          x++;
        j+=i;
      }
      if(a.at(i) != x%2)
        r.insert(i);
    }
  }

  cout << r.size() << endl;
  for(auto x : r)
    cout << x << " ";
  cout << endl;
}
