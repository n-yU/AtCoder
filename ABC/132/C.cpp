#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i;
  cin >> N;
  vector<int> d(N);
  for(i=0; i<N; i++)
    cin >> d.at(i);

  sort(d.begin(), d.end());
  cout << d.at(d.size()/2)-d.at(d.size()/2-1) << endl;
}
