#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,c=0;
  cin >> N;
  vector<int> p(N),q(N);
  for(i=0; i<N; i++) {
    cin >> p.at(i);
    q.at(i) = p.at(i);
  }
  sort(q.begin(), q.end());

  for(i=0; i<N; i++) {
    if(p.at(i) != q.at(i))
      c++;
    if(c>2)
      break;
  }

  if(i==N)
  	cout << "YES";
  else
    cout << "NO";
  cout << endl;
}
