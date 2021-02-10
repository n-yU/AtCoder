#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
  int N,K,i;
  ll s=0;
  cin >> N >> K;
  vector<int> a(N),b(N);
  priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> pq;
  for(i=0; i<N; i++)
    cin >> a.at(i) >> b.at(i);
  for(i=0; i<N; i++)
    pq.push(make_pair(a.at(i), b.at(i)));
  for(i=0; i<K; i++) {
    pair<ll,ll> p = pq.top();
    pq.pop();
    s += p.first;
    pq.push(make_pair(p.first+p.second, p.second));
  }
  cout << s << endl;
}
