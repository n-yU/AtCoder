#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,i,j,x,y,r=0;
  cin >> N >> M;
  map<int, vector<int>> a;
  priority_queue<int> pq;

  for(i=0; i<N; i++) {
    cin >> x >> y;
    if(!a.count(x))
      a[x].push_back(y);
    else
      a.at(x).push_back(y);
  }

  for(i=0; i<M; i++) {
    if(a.count(i+1)) {
      for(j=0; j<a.at(i+1).size(); j++)
        pq.push(a.at(i+1).at(j));
    }
    if(!pq.empty()) {
      r += pq.top();
      pq.pop();
    }
  }

  cout << r << endl;
}
