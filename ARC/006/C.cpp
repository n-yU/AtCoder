#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,j,w;
  cin >> N;
  vector<int> p;

  cin >> w;
  p.push_back(w);

  for(i=1; i<N; i++) {
    cin >> w;
    int dm=1e5+1, dix=N;
    for(j=0; j<p.size(); j++)
      if(p.at(j)>=w && p.at(j)-w<dm) {
        dm = p.at(j)-w;
        dix = j;
      }
    if(dix == N)
      p.push_back(w);
    else
      p.at(dix) = w;
  }

  cout << p.size() << endl;
}
