#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k,i,j;
  set<string> ct;
  cin >> n >> k;
  vector<int> c(n);

  for(i=0; i<n; i++)
    cin >> c.at(i);
  sort(c.begin(), c.end());

  for(i=0; i<(1<<n); i++) {
    vector<int> s,p;
    for(j=0; j<n; j++)
      if(i & (1<<j))
        s.push_back(j);
    if(s.size()!=k)
      continue;

    for(auto x : s)
      p.push_back(c.at(x));

    do {
      string str="";
      for(j=0; j<k; j++)
        str += to_string(p.at(j));
      ct.insert(str);
    } while(next_permutation(p.begin(), p.end()));

  }
  cout << ct.size() << endl;
}
