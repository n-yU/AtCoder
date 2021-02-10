#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  ll N,i,x;
  map<ll,ll> l;
  cin >> N;
  for(i=0; i<N; i++) {
    cin >> x;
    if(l.count(x))
      l.at(x)++;
    else
      l[x]=1;
  }

  if(l.size()==3) {
    ll c[3];
    i=0;
    for(pair<ll,ll> p : l) {
      c[i]=p.first;
      i++;
    }
    if(l.at(c[0])==l.at(c[1])
       && l.at(c[1])==l.at(c[2])
      && ((c[0]^c[1]^c[2])==0))
      cout << "Yes";
    else
      cout << "No";
  } else if(l.size()==2) {
	ll c[2];
    i=0;
    for(pair<ll,ll> p : l) {
      c[i]=p.first;
      i++;
    }
    if(c[0]==0 && l.at(c[0])*2==l.at(c[1]))
      cout << "Yes";
    else
      cout << "No";
  } else if(l.size()==1) {
    for(pair<ll,ll> p : l) {
      if(p.first==0)
        cout << "Yes";
      else
        cout << "No";
    }
  } else
    cout << "No";
  cout << endl;
}
