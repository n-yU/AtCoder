#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  vector<pair<int,int>> p(N);
  for(int i=0; i<N; i++) {
    cin >> a.at(i) >> b.at(i);
    p.at(i) = make_pair(b.at(i), a.at(i));
  }
 
  sort(p.begin(), p.end());
  for(auto e : p)
    cout << e.second << " " << e.first << endl;
}