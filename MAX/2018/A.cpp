#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,s=0;
  cin >> N;
  vector<int> t(N),d(N),m(N);
  for(i=0; i<N; i++)
    cin >> t.at(i) >> d.at(i) >> m.at(i);

  for(i=0; i<N; i++)
    if(t.at(i)+10 <= d.at(i))
      s += m.at(i);
  cout << s << endl;
}
