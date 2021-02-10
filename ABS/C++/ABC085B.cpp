#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,p,c=1;
  cin >> N;
  vector<int> d(N);

  for(i=0; i<N; i++)
    cin >> d.at(i);

  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());
  p=d.at(0);

  if(N!=1)
    for(i=1; i<N; i++) {
      if(d.at(i) < p) {
        c++;
        p=d.at(i);
      } else
        continue;
    }

  cout << c << endl;
}
