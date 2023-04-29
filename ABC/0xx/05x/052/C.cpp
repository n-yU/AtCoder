#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9+7;

map<int,int> primeFact(int n) {
  map<int,int> r;
  for(int i=2; i*i<=n; i++)
    while(n%i == 0) {
      r[i]++;
      n /= i;
    }
  if(n != 1)
    r[n] = 1;
  return r;
}

int main() {
    int N,i;
    ll c=1;
    cin >> N;
    map<int,int> tr;

    for(i=2; i<=N; i++)
        for(auto p : primeFact(i)) {
            if(tr.count(p.first))
                tr.at(p.first) += p.second;
            else
                tr[p.first] = p.second;
        }

    for(auto p : tr) {
        c *= p.second+1;
        c %= mod;
    }

    cout << c << endl;
}