#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i;
  cin >> N;
  vector<int> t(N), x(N), y(N);

  for(i=0; i<N; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
    int s = x.at(i) + y.at(i);
    if(s>t.at(i) || (s+t.at(i))%2!=0)
      break;
  }

  if(i == N)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
