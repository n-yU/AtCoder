#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int N,i;
  ll r=0;
  cin >> N;
  unordered_map<string, int> m;

  for(i=0; i<N; i++) {
    string x;
    cin >> x;
    sort(x.begin(), x.end());

    if(!m.count(x))
      m[x] = 1;
    else {
      r += m.at(x);
      m.at(x)++;
    }
  }

  cout << r << endl;
}
